#include<iostream>
using namespace std;
int LCM_of_three_number(int a,int b,int c);
int main()
{
    int a=3,b=4,c=6,k;
    k=LCM_of_three_number(a,b,c);
    cout<<k;
    return 0;
}
int LCM_of_three_number(int a,int b,int c)
{
    int L;
    for(L=a > b ? (a > c ? a : c) : (b > c ? b : c);L<=a*b*c;L++)
    {
        if(L%a  == 0 && L%b == 0 && L%c == 0)
            break;
    }
    return L;
}
