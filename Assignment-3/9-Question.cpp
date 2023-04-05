#include<iostream>
using namespace std;
void merge_array(int a[],int b[]);

int main()
{
    int a[100],b[100];
    merge_array(a,b);
    return 0;
}
void merge_array(int a[],int b[])
{

    int i,c[100],n1,n2,n3,r,temp;
    cout<<"Enter the size of first array: ";
    cin>>n1;
    cout<<"Enter the array elements: ";
    for(i=0;i<n1;i++)
        cin>>a[i];

    cout<<"Enter the size of second array: ";
    cin>>n2;
    cout<<"Enter the array elements: ";
    for(i=0;i<n1;i++)
        cin>>b[i];


    n3=n1+n2;

    for(i=0;i<n1;i++)
        c[i]=a[i];

    for(i=0;i<n2;i++)
        c[i+n1]=b[i];

    cout<<"Merged Array : ";

    for(i=0;i<n3;i++)
        cout<<c[i]<<" ";

    for(r=1;r<=n3;r++)
    {
        for(i=0;i<n3-r;i++)
        {
            if(c[i]>c[i+1])
            {
                temp=c[i+1];
                c[i+1]=c[i];
                c[i]=temp;
            }
        }
    }

    cout<<"Final Sorted And Merged Array : ";
    for(i=0;i<n3;i++)
        cout<<c[i]<<" ";
}

