#include<iostream>
using namespace std;
int volume_calculate(double l,double b,double h);
int volume_calculate(double r,double h);
int volume_calculate(double r);

int volume_calculate(double l,double b,double h)
{
    return l*b*h;
}
int volume_calculate(double r,double h)
{
    int k;
    k=1/2*(3.14*r*r*h);
    return k;
}
int volume_calculate(double r)
{
    int l;
    l=4/3*(3.14*r*r*r);
    return l;
}
int main()
{
    double j,k,l;
    j=volume_calculate(2,2,2);
    cout<<"Volume of cuboid : "<<j<<endl;
    k=volume_calculate(3,4);
    cout<<"Volume of cone : "<<k<<endl;
    l=volume_calculate(2);
    cout<<"Volume of sphere : "<<l<<endl;
    return 0;
}
