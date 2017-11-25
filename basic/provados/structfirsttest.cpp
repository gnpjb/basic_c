#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct person
{
    double height;
    double weight;
    string name;
};
int main()
{
    person firstPerson;
    cout<<"Name:";
    cin>>firstPerson.name;
    cout<<"height(in meters):";
    cin>>firstPerson.height;
    cout<<"weight(in kg):";
    cin>>firstPerson.weight;
    cout<<endl<<"Your name is "<<firstPerson.name<<" you are "<<firstPerson.height<<" meters tall and you weight "<<firstPerson.weight<<"kg\n";
    
    
        
}
