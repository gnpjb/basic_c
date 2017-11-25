#include <iostream>

using namespace std;

int main()
{
int firstq=0;
int secondq=0;
int thirdq=0;
int sum=0;


cout<<"options question 1\n1:\n2:\n3:\n";
cout<<"your answer:";
cin>>firstq;
if(firstq==1)
	sum++;
cout<<"\n";

cout<<"options question 2\n1:\n2:\n3:\n";
cout<<"your answer:";
cin>>secondq;
if(secondq==2)
	sum++;
cout<<"\n";

cout<<"options question 3\n1:\n2:\n3:\n";
cout<<"your answer:";
cin>>thirdq;
if(thirdq==3)
	sum++;
cout<<"\n"<<"your points:";


while(sum>0)
{cout<<"-";
sum--;}
cout<<"\n";
}
