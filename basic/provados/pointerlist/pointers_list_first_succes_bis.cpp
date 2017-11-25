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
    do
    {
        cout<<"write e to exit or a to continue:"<<endl;
        cin>>exit;
         if(exit == 'e')
            break;
        cout<<"write a number:"<<endl;
        cin>>number;
        cout<<endl;
        
        
        if(q_number != 0)
        {
            grow1(&list,&number);
        }
        if(q_number == 0)
        {
            list.number=number;
            list.p_next=NULL;
            q_number=1;
        }
        
        
        
        
        }while (exit !='e');
    
    
    output(&list);
    
    
    cout<<endl<<"finished";
    
}
