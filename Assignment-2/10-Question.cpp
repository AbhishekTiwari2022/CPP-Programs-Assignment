#include<iostream>
using namespace std;

int add_value(int x,int y);
long add_value(float x,float y);

int add_value(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
long add_value(double x,double y)
{
     return x+y;
}
int main()
{
    double x=5.00,y=10.00,c;
    c=add_value(x,y);
    cout<<c;
    return 0;
}

