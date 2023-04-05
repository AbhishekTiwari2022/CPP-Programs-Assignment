#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public:
        void set_time(int hour,int minute,int second)
        {
            h=hour;
            m=minute;
            s=second;
        }
        void show_time()
        {
            cout<<h<<" hr "<<m<<" min "<<s<<" sec";
        }
};
int main()
{
    Time t1;
    t1.set_time(3,45,20);
    t1.show_time();
    return 0;
}

