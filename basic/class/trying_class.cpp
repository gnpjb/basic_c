#include<iostream>
#include<string>

using namespace std;


class list
{
public:
    list();
    list(int size);
    ~list();
    void pushback(int new_val);
    void setval(int pos,int new_val);
private:
    int value;
    list *p_next;
    list *p_prev;
}


list::list();
{
    value=0;
    p_next=null;
    p_prev=null;
}


list::list(int size)
{
    list *p_temp_next;
    list *p_temp_prev;
    if(size==1)
    {
        value=0;
        p_next=null;
        p_prev=null;
    }
    if(size>1)
    {
        value=0;
        p_prev=null;
        p_next=new list;
        p_temp_next=p_next;
        p_temp_prev=this;
        for(int i=2;i<size-1;i++)
        {
            *p_temp_next.value=0;
            *p_temp_next.p_next=new list;
            *p_temp_next.p_prev=p_temp_prev;
            p_temp_prev=p_temp_next;
            p_temp_next=*p_temp_next.p_next;
        }
        *p_temp_next.value=0;
        *p_temp_next.p_next=null;
        *p_temp_next.p_prev=p_temp_prev;
    }
}

list::~list()
{
    delete p_next;
    
}

list::void pushback(int new_val)
{
    list *temp_next=this;
    while(temp_next->p_next!=null)
    {
        temp_next=temp_next->p_next;
    }
    temp_next->p_next=new list;
    list *temp_prev=temp_next;
    temp_next=temp_next->p_next;
    temp_next->p_prev=temp_prev;
    temp_next->p_next=null;
}

list::void setval(int pos,int new_val)
{
    int times=0;
    list *temp_p=this;
    while(temp_p->p_next!=null||times<pos)
    {
        times++;
        temp_p=temp_p->p_next;
    }
    temp_p->value=new_val;
}
