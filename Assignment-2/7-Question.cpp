#include<iostream>
using namespace std;
void add();
int main()
{
    add();
    return 0;
}
void add()
{
    int a,b,c;
    cout<<"Enter two number : ";
    cin>>a>>b;
    c=a+b;
    cout<<"Addition of "<<a <<" and "<<b<<" is : "<<c;
}
