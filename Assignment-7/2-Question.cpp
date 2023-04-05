#include<iostream>
using namespace std;
class Time
{
    private :
        int hour,minute,second;
    public :
        void setTime(int h,int m,int s)
        {
            hour=h;
            minute=m;
            second=s;
        }

        void normalize()
        {
            minute=minute+(second/60);
            second=second%60;
            hour=hour+minute/60;
            minute=minute%60;
        }
        void showTime()
        {
            cout<<"Hour="<<hour<<" "<<"Minute="<<minute<<" "<<"Second="<<second;
        }
        friend Time operator>(Time,Time);
        Time operator++();
        friend Time operator++(Time,int);
        Time operator+(Time);

};
Time operator>(Time T1,Time T2)
{
    if(T1.hour>T2.hour)
        return T1;
    else
        return T2;
}
Time operator++(Time T,int k)
{
    Time temp;
    temp.second=T.second+k;
    return temp;
}
Time Time::operator++()
{
    Time temp;
    temp.second=1+second;
    return temp;
}
Time Time::operator+(Time T)
{
    Time temp;
    temp.hour=hour+T.hour;
    temp.minute=minute+T.minute;
    temp.second=second+T.second;
    return temp;
}
int main()
{
    Time t1,t2,t3,t4;
    t1.setTime(5,125,130);
    t2.setTime(3,30,22);
    t1.normalize();
    t2.normalize();
    t3=t1+t2;
    t3.showTime();
    cout<<endl;
    t3=t1>t2;
    t3.showTime();
    cout<<endl;
    t3=++t1;//t3=t1.operator++()
    t3.showTime();
    cout<<endl;
    t3=t1++;//t3=operator++(t1)
    t3.showTime();


    return 0;
}
