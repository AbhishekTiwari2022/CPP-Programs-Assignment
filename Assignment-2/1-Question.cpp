#include<iostream>
using namespace std;

int isPrime(int);

int main()
{
    cout<<isPrime(7);
    return 0;
}

int isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
        if(n%i==0)
            break;
    if(i==n)
        cout<<n<<" is a prime number";
    else
        cout<<n<<" is not a prime number";
    return n;
}
