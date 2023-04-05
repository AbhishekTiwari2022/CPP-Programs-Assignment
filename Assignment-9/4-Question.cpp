// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
class Distance
{
    private:
        int hr,min,sec;
    public:
        void setTime(int hr,int min,int sec)
        {
           this->hr=hr;
           this->min=min;
           this->sec=sec;
        }
        void showTime()
        {
            cout<<"hr="<<hr<<endl;
            cout<<"min="<<min<<endl;
            cout<<"sec="<<sec<<endl;
        }

};
Distance* f1()
{
    Distance *t=new Distance[2];
    t[1].setTime(5,3,4);
    return t;
}

int main()
{
    Distance d1,*d2;
    d1.setTime(6,25,10);
    d1.showTime();
    d2=f1();
    d2->showTime();
    return 0;
}

