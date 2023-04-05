#include<iostream>
using namespace std;
class Time
{
    public :
        int hr,m,sec;
    public :
        void setTime(int hour,int minute,int second)
        {
            hr=hour;
            m=minute;
            sec=second;
        }
        void Normalize()
        {
            m=m+(sec/60);
            sec=sec%60;
            hr=hr+(m/60);
            m=m%60;
        }
        void showTime()
        {
            cout<<hr<<":"<<m<<":"<<sec;
        }
        friend istream& operator>>(istream&,Time&);
        friend ostream& operator<<(ostream&,Time);
};
istream& operator>>(istream &din,Time &T)
{
        din>>T.hr>>T.m>>T.sec;
        return din;
}
ostream& operator<<(ostream &dout,Time T)
{
    dout<<T.hr<<":"<<T.m<<":"<<T.sec;
}
int main()
{
    Time t1,t2,t3;
    cout<<"Enter Time : ";
    cin>>t1;//operator<<(cin&,t1&)
    t1.Normalize();
    //t1.showTime();
    cout<<t1;//operator++(otream&,t1)
    //t2.Normalize();
    //t2.showTime();
    return 0;
}
