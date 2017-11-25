#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void swap(int *left,int *right)
{
    int temp=*left;
    *left=*right;
    *right=temp;
    
}

int main()
{
    int x;
    int y;
    cout<<"x:";
    cin>>x;
    cout<<endl<<"y:";
    cin>>y;
    cout<<endl<<"before swap"<<endl;
    cout<<x<<"     "<<y;
    swap(&x,&y);
    cout<<endl<<"after swap"<<endl;
    cout<<x<<"     "<<y;
    
}
