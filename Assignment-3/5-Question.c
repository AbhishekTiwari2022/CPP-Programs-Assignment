#include<iostream>
using namespace std;
void print_all_prime_factor(int a,int b);
int main()
{
    int a=4,b=6;
    print_all_prime_factor(a,b);
    return 0;
}
void print_all_prime_factor(int a,int b)
{
    int H;
    for(H=a>b?a:b;H>=1;H--)
        if(a%H == 0 && b%H == 0)
            break;
    if(H==1)
        cout<<H;
}
