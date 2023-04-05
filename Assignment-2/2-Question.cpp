#include<iostream>
using namespace std;

void find_highest_value_in_given_digit(int);


int main()
{
        int c;
        cout<<"Enter a number : ";
        cin>>c;
        find_highest_value_in_given_digit(c);

        return 0;
}
void find_highest_value_in_given_digit(int n)
{
    int d=0,l=0;
    while(n>0)
    {
        d=n%10;

        if(d>l)
           l=d;
        n=n/10;

    }
    cout<<l;

}
