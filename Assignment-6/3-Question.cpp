#include<iostream>
using namespace std;
class Time
{
    private:
        int hr,m,sec;
    public:
        Time(int hour,int minute,int second)
        {
            hr=hour;
            m=minute;
            sec=second;
        }
        void ShowTime()
        {
            cout<<hr<<" "<<m<<" "<<sec;
        }
};
int main()
{
    Time t(03,22,33);
    t.ShowTime();
    return 0;
}
