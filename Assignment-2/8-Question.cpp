#include<iostream>
using namespace std;

int area(int r);
int area(int l,int b);
int area(float b,float h);

int area(int r)
{
   return 2.14*r*r;
}
int area(int l,int b)
{
    return l*b;
}
int area()
{

    float b,h,c;
    cout<<"Enter base and height of the triangle : ";
    cin>>b>>h;
    c=(h*b)/2.0;
    return c;
}
int main()
{
    cout<<area(2);
    cout<<area(2,2);
    cout<<area();
    return 0;
}
