#include<iostream>
#include<math.h>
using namespace std;

int calculate_x_raise_to_y(int,int);
int main()
{
    cout<<calculate_x_raise_to_y(2,3);
    return 0;
}

int calculate_x_raise_to_y(int x,int y)
{
    return pow(x,y);
}
