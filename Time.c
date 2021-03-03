#include<iostream>
#include<iomanip>
using namespace std;
class Time
{
   public:
    int Seconds;
    int hr,min,sec;
    void get_time();
    void Calculate_Time();
    void Display_time();
};

void Time::get_time()
{
    cout<<"Enter Time: \n";
    cout<<"Hours?";
    cin>>hr;
    cout<<"Minutes?";
    cin>>min;
    cout<<"Seconds?";
    cin>>sec;
}
void Time::Calculate_Time()
{
    Seconds=hr*3600+min*60+sec;
}
void Time::Display_time()
{ 
    cout<<"The time is =  ";
    cout<<setw(2)<<setfill('0')<<hr;
    cout<<":"<<setw(2)<<setfill('0')<<min;
    cout<<":"<<setw(2)<<setfill('0')<<sec;
    cout<<"\n Time in total seconds:  "<<Seconds;
}
int main()
{
    Time t;
    t.get_time();
    t.Calculate_Time();
    t.Display_time();
    return 0;
}
