#include <iostream>

using namespace std;

struct numberslist
{
    int number;
    numberslist *p_next;
};

int grow1(numberslist *list,int *number)
{
        if((*list).p_next==NULL)
        {
            (*list).p_next= new numberslist;
            ((*list->p_next)).p_next=NULL;
            ((*list->p_next)).number=*number;
            return 0;
        }
        else
        {
            grow1((*list).p_next,number);
        }
}

int grow2(numberslist *list,int *number)
{
    numberslist *t_pointer;
    t_pointer=(*list).p_next;
    (*list).p_next=new numberslist;
    (*list->p_next).p_next=t_pointer;
    (*list->p_next).number=*number;
    
}

int grow4(numberslist *list,int *number)
{
    int temp_number;
    temp_number=(*list).number;
    numberslist *p_temp1;
    p_temp1=(*list).p_next;
    (*list).p_next= new numberslist;
    (*list->p_next).p_next=p_temp1;
    (*list->p_next).number= temp_number;
    (*list).number=*number;
}

int grow3(numberslist *p_temp1,int *number,int x)
{
    numberslist *p_temp2;
    if(x==1)
        grow4(p_temp1,number);
    if(x>1)
    {for(int i=1;i<(x-1);i++)            
    {
        p_temp2=(*p_temp1).p_next;
        p_temp1=p_temp2;
    }
        if((*p_temp1).p_next!=NULL)
            grow2(p_temp1,number);
    }
}


int output(numberslist *list)
{
    cout<<(*list).number<<endl;
    if((*list).p_next!=NULL) 
    {
        output((*list).p_next);
    }
}
int main ()
{
    char exit;
    exit = 'a';
    numberslist list;
    int number;
    int q_number=0;
    int x;
    do
    {
        beggining:
        cout<<"write e to exit , a to add at the end, s to add as the second value or x to add in whichever value("<<q_number<<" values):"<<endl;
        cin>>exit;         
        if(exit == 'e' && q_number==0)
            goto finish;
         if(exit == 'e')
            break;

         if(exit=='x')
         {
             cout<<"in which value;"<<endl;
             cin>>x;
             if(x<1)
             {
                 cout<<"value too low"<<endl;
                 goto beggining;
            }    
             if(x>q_number)
             {
                 cout<<"number is too damn high"<<endl;
                 goto beggining;
            }
         }
        cout<<"write a number:"<<endl;
        cin>>number;
        cout<<endl;
        
        
        if(q_number != 0)
        {   if(exit=='a')
                grow1(&list,&number);
            if(exit=='s')
                grow2(&list,&number);
            if(exit=='x')
                grow3(&list,&number,x);
            q_number++;
            
        }
        
        if(q_number == 0)
        {
            list.number=number;
            list.p_next=NULL;
            q_number++;
        }
        
        }while (true);
    
    
    output(&list);
    
        finish:
    cout<<endl<<"finished";
    
}
