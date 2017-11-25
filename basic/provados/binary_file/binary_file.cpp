#include<fstream>
#include<iostream>
#include<string>

using namespace std;


bool file_exist(string file_name)
{
    ifstream file(file_name,ios::binary);
    if(file.is_open())
    {
        file.close();
        return true;
    }
    else
    {
        file.close();
        return false;
    }
}

bool create_file(string file_name)
{
    ofstream file(file_name,ios::binary);
    if(file.is_open())
    {
        file.close();
        return true;
    }
    else
    {
        file.close();
        return false;
    }
}

bool write(string file_name,int info)
{
    ofstream file(file_name,ios::binary);
    if(!file.is_open())
        return false;
    file.seekp(0,ios::end);
    file.write((char*)&info,sizeof(int));
    file.close();
    return true;
}

bool read(string file_name,int size)
{
    //char *a;
    ifstream file(file_name,ios::binary);
    if(!file.is_open())
    {
        return false;
    }
    cout<<endl<<"values stored:"<<endl;
    file.seekg(0,ios::beg);
    while(!file.eof())
    {
        int x;
        file.read((char*)&x,size);
        cout<<x<<endl;
    }
    return true;
}














int main()
{
    string file_name="file";
    char action='a';
    int size=sizeof(int);
    if(!file_exist(file_name));
    {
        if(!create_file(file_name))
        {
            cout<<endl<<"file doesnt exist and couldnt be opened"<<endl;
            return 0;
        }
    }
    while(true)
    {
        action='a';
        while(!(action=='w'||action=='r'||action=='e'))
        {
            cout<<endl<<"action to be take:(write,read or exit):"<<endl;
            action=cin.get();            
            cin.clear();
            cin.ignore(1000,'\n');
        }
        if(action=='e')
            break;
        if(action=='r')
        {
            if(!read(file_name,size))
            {
                cout<<endl<<"couldnt read"<<endl;
            }
        }
        if(action=='w')
        {
            cout<<"what to write(must be an int)"<<endl;
            int info;
            cin>>info;
            cout<<"writing:"<<info<<endl;
            if(!write(file_name,info))
            {
                cout<<endl<<"couldnt write"<<endl;
            }
        }
    }
}
