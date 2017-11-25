#include <iostream>

using namespace std;

int sumar(int x,int y)
{
int result;
result=x+y;
return result;
    
}

int main()
{int num_1;
int num_2;
cout<<"number " << 1 << endl;
cin>>num_1;
cout<<"number 2" << endl;
cin>>num_2;
cout<<"\n";
cout<<sumar(num_1,num_2);
cout<<"\n";
}
