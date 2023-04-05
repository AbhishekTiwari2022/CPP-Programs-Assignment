#include<iostream>
using namespace std;
class Date
{
    private:
        int d,m,y;
    public:
        Date():d(11),m(01),y(2023){}
        Date(int d,int m,int y):d(d),m(m),y(y){}
        void showDate();
};
void Date::showDate()
{
    cout<<d<<":"<<m<<":"<<y;
}
int main()
{
    Date d1,d2(3,1,2023);
    d1.showDate();
    cout<<endl;
    d2.showDate();
    return 0;
}
