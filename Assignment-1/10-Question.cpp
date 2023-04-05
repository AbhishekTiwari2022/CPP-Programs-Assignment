#include<iostream>
using namespace std;
int main()
{
    int x[10]={10,10,10,10,10,10,10,10,10,10},i,sum=0;
    for(i=0;i<=9;i++)
        sum=sum+x[i];
    cout<<"Sum of all the element in size of 10 array is : "<<sum;
    return 0;
}



