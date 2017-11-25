#include <iostream>

using namespace std;

int main()
{
int i=0;
cout<<"for\n";
for (i=0;i<5;i++)
{cout<<i;}
i=0;
cout<<"\nwhile i++ first\n";
while (i<5)
{i++;
cout<<i;}
cout<<"\nwhile i++ after\n";
i=0;
while (i<5)
{cout<<i;
i++;}
cout<<"\ndo i++ first\n";
i=0;
do
{i++;
cout<<i;
}
while(i<5);
cout <<"\nfor canceled inmediately\n";
for(i=0;i<5;i++)
{cout<<i;
i=5;}
cout<<endl;
}
