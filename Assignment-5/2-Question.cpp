#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public:
        void setTime(int,int,int);
        void showTime();
        void normalize();
        Time add(Time);
        bool is_greater(Time);
};
void Time::setTime(int hour,int minute,int second)
{
    h=hour;
    m=minute;
    s=second;
}
void Time::showTime()
{
    cout<<"h="<<h<<" m="<<m<<" s="<<s;
}
void Time::normalize()
{
    m=m+(s/60);
    s=s%60;
    h=h+m/60;
}
Time Time::add(Time T)
{
    Time tem;
    tem.h=h+T.h;
    tem.m=m+T.m;
    tem.s=s+T.s;
    return tem;
}
bool Time::is_greater(Time T)
{
    if(h>T.h)
        return true;
    else
        return false;
}
int main()
{
    Time t1,t2,t3;
    //bool grt;
    t1.setTime(5,125,130);
    t1.showTime();

    cout<<endl;
    t2.setTime(3,30,22);
    t2.showTime();

    cout<<endl;
    cout<<"Normalized Time T1: ";
    t1.normalize();
    t1.showTime();
    cout<<endl;

    cout<<"Normalized Time T2: ";
    t2.normalize();
    t2.showTime();

    cout<<endl;
    t3=t1.add(t2);
    t3.showTime();

    cout<<endl;
    cout<<t1.is_greater(t2);
    //cout<<grt;
    //grt.is_greater();
    return 0;
}
