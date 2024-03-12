#include <iostream>
using namespace std;
int main()
{
    int Days;
    float Fine;
    cout<<"Enter the number of days Delayed:";
    cin>>Days;
    
    if(Days>0&&Days<=5)
    {
      cout<<"Total Fine is:"<<0.50*Days;
    }
    
    else if(Days>=6&&Days<=10)
    {
      Days= Days-5;
      Fine=2.50+(Days*1);
      cout<<"Total Fine is:"<<Fine;
    }
    else if(Days>10&&Days<=30)
    {
      Days=Days-10;
      Fine= 2.50+5+(Days*5);
      cout<<"Total Fine is:"<<Fine;
    }
    
    else if(Days>30)
    {
      cout<<"Bro,Your Membership is Fucked up.";
    }
    
    else
    {
      cout<<"Really bro, You counting days with negative numbers ";
    }
    return 0;
}