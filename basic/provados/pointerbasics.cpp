#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

void updater(int *x)
{
    *x=*x + 10;
}
int main()
{
    int x;
    x=0;
    cout<<"x number=";
    cin>>x;
    updater(&x);
    cout<<"number after adding 10="<<x;
    
}
