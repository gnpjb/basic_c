#include<iostream>
#include<fstream>
#include<string>


using namespace std;

struct mice_struct
{
    int left;
    int right;
    int button;
};



int main(int argc,char*argv[])
{
    mice_struct mice_var;
    ifstream mice_file;
    mice_file.open("/dev/input/mice",ios::binary);
    if(!mice_file.is_open())
    {
        cout<<"could't open"<<endl;
        return 0;
    }
    for(int i=0;i<10000000;i++){
        mice_file.seekg(0,ios::beg);
        mice_file.read(reinterpret_cast<char*>(mice_var.left),sizeof(int));
        mice_file.read(reinterpret_cast<char*>(mice_var.right),sizeof(int));
        mice_file.read(reinterpret_cast<char*>(mice_var.button),sizeof(int));
        cout<<endl<<"left:"<<mice_var.left<<endl<<"right:"<<mice_var.right<<endl<<"button:"<<mice_var.button<<endl;
    }
}
