#include<iostream>
using namespace std;
void print_all_prime_factor(int n);
int main()
{
    int n=36;
    print_all_prime_factor(n);
    return 0;
}
void print_all_prime_factor(int num)
{
    int count;

    printf("\nPrime Factors of %d are ..\n", num);
    for(count = 2; num > 1; count++)
    {
        while(num % count == 0)
        {
            printf("%d ", count);
            num = num / count;
        }
    }
    printf("\n");
}
