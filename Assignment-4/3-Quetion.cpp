#include<iostream>
using namespace std;
class Date
{
    private:
        int d,m,y;
    public:
        void set_date(int day,int month,int year)
        {
            d=day;
            m=month;
            y=year;
        }
        void show_date()
        {
            cout<<"d="<<d<<" "<<"m="<<m<<" "<<"y="<<y;
        }
};
int main()
{
    Date d1;
    d1.set_date(31,12,2022);
    d1.show_date();
    return 0;
}
