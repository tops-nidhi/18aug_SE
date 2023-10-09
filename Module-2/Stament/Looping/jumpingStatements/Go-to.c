// WAP to find the prime number 
#include<stdio.h>  // Header file for input output stream class.
int main() {
    long long int n,i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%lld",&n);
    for( i=2 ; i < n ; ++i )
    {
        if(n % i == 0)
        {
            flag = 1;
            goto prime;
        }
    }
    prime: 
        if(flag == 0)
        {
            printf("\n%lld is a Prime Number.\n", n);
        }
        else{
            printf("\n%lld is not a Prime Number.", n);
        }
}