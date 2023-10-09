// WAP to find the factorial of user given number using recursion
#include<stdio.h>  // Header file for input output operations.
long int fact(long int no)
{
    if(no <= 1)
    {
        return 1;
    }
    return no  * fact(no -1);
}
int main()
{
    int n;
    long int res;
    printf("\nEnter the no to fnd the factorial: ");
    scanf("%d", &n);
    res = fact(n);
    printf("Factorial is %ld\n", res);
}