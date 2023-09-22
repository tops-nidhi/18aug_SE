// WAP to check the max value between three value using nested if in c
#include <stdio.h> //Preprocessor Directive
int main()
{
    float a, b, c;
    printf("Enter first number : ");
    scanf("%f", &a);
    printf("\n");
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("\n");
    printf("Enter third number : ");
    scanf("%f", &c);
    printf("\n");
    if ((a > b))
    {
        if ((a > c))
        {
            printf("%0.2f is maximum\n ", a);
        }
        else
        {
            printf("%0.2f is maximum \n", c);
        }
    }
    else if(a == b && a == c && b == c)
    {
        printf("Each are equal");
    }
    else
    {
        if ((b > c))
        {
            printf("%0.2f is maximum \n ", b);
        }
        else
        {
            printf("%0.2f is maximum \n", c);
        }
    }
    return 0;
}