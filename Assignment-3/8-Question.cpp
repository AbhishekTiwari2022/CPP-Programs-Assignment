#include<iostream>
using namespace std;
void swap_array(int a[],int b[]);

int main()
{
    int a[4]={1, 2, 3, 4};
    int b[4]={5, 6, 7, 8};
    swap_array(a,b);
    return 0;
}
void swap_array(int a[],int b[])
{
    int i,temp[4];
    for(i=0;i<=3;i++)
        temp[i]=b[i];
    for(i=0;i<=3;i++)
        b[i]=a[i];
    for(i=0;i<=3;i++)
        a[i]=temp[i];
    cout<<"Array A Is :";
    for(i=0;i<=3;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Array B Is :";
    for(i=0;i<=3;i++)
        cout<<b[i]<<" ";
}
