#include <iostream>
#include <string>

using namespace std;

string englishnum="";



int hundred(int num)
{


int x;
x=num/100;


if(x==0)
{
return 0;
}
if(x==1)
{
englishnum= englishnum + " one hundred ";
}
if(x==2)
{ 
englishnum= englishnum + " two hundred ";
}
if(x==3)
{ 
englishnum= englishnum + " three hundred ";
}
if(x==4)
{ 
englishnum= englishnum + " four hundred ";
}
if(x==5)
{ 
englishnum= englishnum + " five hundred ";
}
if(x==6)
{ 
englishnum= englishnum + " six hundred ";
}
if(x==7)
{ 
englishnum= englishnum + " seven hundred ";
}
if(x==8)
{ 
englishnum= englishnum + " eight hundred ";
}
if(x==9)
{ 
englishnum= englishnum + " nine hundred ";
return 0;
}

}




int dozens(int num)
{

int x;
int y;
y=num/100;
y=y*100;
x=num;
x=x-y;
x=x/10;

if(x==0)
return 0;
if(x==1)
return 0;
if(x==2)
englishnum=englishnum + " twenty ";
if (x==3)
englishnum=englishnum + " thirdty ";
if(x==4)
englishnum=englishnum + " fourty ";
if(x==5)
englishnum=englishnum + " fifty ";
if(x==6)
englishnum=englishnum + " sixty ";
if(x==7)
englishnum=englishnum + " seventy ";
if(x==8)
englishnum=englishnum + " eighty ";
if(x==9)
englishnum=englishnum + " ninety ";
return 0;
}






int twenties(int num)
{

int y;
int x;
y=num/100;
y=y*100;
x=num;
x=x-y;


if(x<10 || x>20)
{
y=x/10;
y=y*10;
x=x-y;
if(x==0)
return 0;
if(x==1)
englishnum=englishnum+" one ";
if(x==2)
englishnum=englishnum+" two ";
if(x==3)
englishnum= englishnum+" three ";
if(x==4)
englishnum= englishnum+" four ";
if(x==5)
englishnum= englishnum+" five ";
if(x==6)
englishnum= englishnum+" six ";
if(x==7)
englishnum= englishnum+" seven ";
if(x==8)
englishnum= englishnum+" eight ";
if(x==9)
englishnum= englishnum+" nine ";
}
if(9 < x && x < 20)
{if(x==10)
englishnum= englishnum+" ten ";
if(x==11)
englishnum= englishnum+" eleven ";
if(x==12)
englishnum= englishnum+" twelve ";
if(x==13)
englishnum= englishnum+" thirdteen ";
if(x==14)
englishnum= englishnum+" fourteen ";
if(x==15)
englishnum= englishnum+" fifteen ";
if(x==16)
englishnum= englishnum+" sixteen ";
if(x==17)
englishnum= englishnum+" seventeen ";
if(x==18)
englishnum= englishnum+" eighteen ";
if(x==19)
englishnum= englishnum+"nineteen";
}
}








int main()
{
int num;
do
{
cout<<"what number:";
cin>>num;
cout<<"\n";

if(num>999999999)
cout<<"\n number to high \n"<<"it must be below 1000000000\n";

if(num<1000000000 && num>0)
break;

if(num<0)
cout<<"must be a positive number\n";

}while(num>999999999 || num<0);

if(num>=999999)//123456789
{
int million=0;
million=num/1000000;
hundred(million);
dozens(million);
twenties(million);
englishnum =  englishnum + " million "; 
}


if(num>=999)//123456
{int x=0;
int y=0;
y=num/1000000;
y=y*1000000;
x=num;
x=x-y;
x=x/1000;
hundred(x);
dozens(x);
twenties(x);
englishnum=englishnum+" thousand ";

}



if(num>0)//123
{int x;
int y;
y=num/1000;
y=y*1000;
x=num;
x=x-y;
hundred(x);
dozens(x);
twenties(x);
}



if(num==0)//zero
englishnum="zero";

cout<<"your number is:";
cout<< englishnum <<"\n";


}
