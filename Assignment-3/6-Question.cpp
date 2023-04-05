#include<iostream>
using namespace std;
int calculate_HCF(int a,int b);
int main()
{
  int a=4,b=8,HCF;
  HCF= calculate_HCF(a,b);
  cout<<HCF;
}
int calculate_HCF(int a,int b)
{
    int H;
    for(H=a>b?a:b;H>=1;H--)
        if(a%H==0 && b%H==0)
            break;
    return H;
}
