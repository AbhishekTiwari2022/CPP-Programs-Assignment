#include<iostream>
using namespace std;

void max_value(int x,int y);
void max_value(float x,float y);

void max_value(int x,int y)
{
    if(x>y)
        cout<<x<< "is max";
    else
        cout<<y<<" is max";
}
void max_value(float x,float y)
{
     if(x>y)
        cout<<x<<" is max";
    else
        cout<<y<<" is max";
}
int main()
{
    float x=5,y=10;
    max_value(x,y);
    return 0;
}
