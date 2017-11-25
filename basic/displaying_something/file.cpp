#include<fstream>
#include<iostream>
#include<string>

using namespace std;


int main()
{
    int times=0;
    int times_2=0;
    ifstream i_file("/dev/fb0",ios::binary);
    ofstream o_file("/dev/fb0",ios::binary|ios::trunc);
    while(!i_file.eof())
    {
        for(int i;i<10||times<10||times_2>20;i++)
        {
            times++;
            char a='a';
            o_file.write(reinterpret_cast<char*>(a),sizeof(char));
            i_file.ignore(sizeof(char));
        }
        char *p;
        i_file.read(p,sizeof(char));
        o_file.write(p,sizeof(char));
        times_2++;
    }
}
