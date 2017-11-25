#include <iostream>

using namespace std;

void loopholes(int *number)
{
    if(*number<10)
    {cout<<*number<<endl;
     *number=*number + 1;
     loopholes(number);
    }
}

int main()
{
    int number=0;
    loopholes(&number);
    cout<<"finished";
    return 0;
}
