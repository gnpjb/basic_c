#include <iostream>
#include <string>
#include <fstream>

using namespace std;


int main()
{
    string file_name="random.txt";
    string new_file_name="wtf.txt";
    ofstream file(file_name);
    file.close();
    rename(file_name.c_str(),new_file_name.c_str());
}

