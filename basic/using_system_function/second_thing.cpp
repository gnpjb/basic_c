#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main(int argc,char *argv[])
{
    string text="";
    char text_c[2];
    int security=0;
    FILE *ls_output=popen("ls","r");  
    if(!ls_output)
    {
        cout<<"program failed";
        return 0;
    }
    /*while(!feof(ls_output)&&security<100000)//this works
    {
        fgets(text_c,2,ls_output);
        text.append(text_c);
        security++;
    }*/
    for(int i;fgets(text_c,2,ls_output);feof(ls_output))//this works a little bit better
    {
        text.append(text_c);
    }
    cout<<endl<<endl<<text;
}
