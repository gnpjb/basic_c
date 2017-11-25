 #include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int z;
    cout<<"set value for x:"<<endl;
    cin>>x;
    cout<<"set value for y:"<<endl;
    cin>>y;
    cout<<"set value for z:"<<endl;
    cin>>z;
    cout<<"x value "<<x<<" "<<x++<<" x++ "<<x--<<" x-- "<<++x<<" ++x "<<--x<<" --x " <<endl;
    cout<<"x value "<<x<<" "<<x<<" x "<<endl;
    cout<<"x value "<<x<<" "<<(x==y)<<" x==y "<<endl;
    cout<<"x value "<<x<<" "<<"y value "<<y<<" "<<" z value "<<z<<" "<<(x<z?10:0)<<" x<z?10:0 "<<endl;
    cout<<"x value "<<x<<" "<<"y value "<<y<<" "<<(x|y)<<" x|y "<<endl;
    
    
    
    
}
