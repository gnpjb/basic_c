#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

int suma(int *p_firstvalue,int *p_secondvalue, int *sum)
{
    *sum  = *p_firstvalue + *p_secondvalue;
    return 0;
}

int main()
{
    int firstvalue, secondvalue;
    int sum;
    cout<<"first value to sum"<<endl;
    cin>>firstvalue;
    cout<<endl<<"second value to sum"<<endl;
    cin>>secondvalue;
    suma(&firstvalue,&secondvalue,&sum);
    cout<<endl<<sum;
    
}
