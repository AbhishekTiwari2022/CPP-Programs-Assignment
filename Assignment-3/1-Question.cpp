#include<iostream>
using namespace std;
void is_sort_array_asc_order(int a[]);
int main()
{
    int a[5]={10,1,3,11,13};
    is_sort_array_asc_order(a);

    return 0;
}
void is_sort_array_asc_order(int a[])
{
    int i,temp,r;
    for(r=1;r<6;r++)
    {
        for(i=0;i<=4-r;i++)
        {
            if(a[i]>a[i+1])
            {
                temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
            }
        }
    }
    cout<<"Ascending Elements Are : \n";
    for(i=0;i<=4;i++)
    {
        cout<<" "<<a[i];
    }

}
