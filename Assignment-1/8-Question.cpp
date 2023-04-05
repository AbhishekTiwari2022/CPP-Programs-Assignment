#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter two number ";
    cin>>x>>y;
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"x= "<<x<<" and y= "<<y;
    return 0;
}

