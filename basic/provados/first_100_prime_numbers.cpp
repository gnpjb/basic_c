#include <iostream>

using namespace std;

int isprime(int num)
{
	for(int i=2;i<num;i++)
	{
	if(num%i==0)
	{return 0;
	break;}
	}
	return 1;
}
int main()
{
	int num;
	cout<<"till which number:";
	cin>>num;
	cout<<"\n";
	for(int i=0;i<=num;i++)
		{if (isprime(i)==1)
			cout<<i<<" is prime\n";
		}
	cout<<"\n";
}
