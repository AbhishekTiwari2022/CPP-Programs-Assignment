#include<iostream>
using namespace std;
void swap_data(int*,int*);
int main()
{
    int x=10,y=20;
    swap_data(&x,&y);
    cout<<"x= " <<x<<" y= " <<y;

}
void swap_data(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
