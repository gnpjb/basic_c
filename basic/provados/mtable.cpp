#include <iostream>

using namespace std;

int main()
{
cout<<"\t";
for(int i=0;i<10;i++)
{cout<<i<<"\t";}
cout<<"\n";
for(int i=0;i<10;i++)
{cout<<i<<"\t";
for(int j=0;j<10;j++)
{cout<<i*j<<"\t";}
cout<<"\n";}
}
