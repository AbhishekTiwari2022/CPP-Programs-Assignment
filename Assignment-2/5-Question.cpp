#include<iostream>
using namespace std;
void check_number_Ispresent_inFibo(int);
int main()
{
    int n;
    cout<<"Enter a term that present in fibonacci series : ";
    cin>>n;
    check_number_Ispresent_inFibo(n);
    return 0;
}
void check_number_Ispresent_inFibo(int num)
{
    int a=0,b=1,c,i;
    for(i=2;i;i++)
    {
        c=a+b;
        if(c==num)
        {
            cout<<"Yes Present";
            break;
        }

        else
        {
            if(c>num)
            {
                 cout<<"Not Present";
                 break;
            }
            else
            {
                a=b;
                b=c;
            }

        }

    }
}
