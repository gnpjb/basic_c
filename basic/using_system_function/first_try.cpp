#include<iostream>

using namespace std;

int main(int argc,char *argv[])
{
    for(int i;i<10;i++)
    {
        if(i%2==0)
        {
            system("tput smul");
            cout<<"hello world!!"<<endl;
        }
        if(!(i%2==0))
        {
            system("tput rmul");
            cout<<"jElLo WhOrL!!!"<<endl;
        }
    }
}
