/*
    && = Logical And
    {
        T T -> T
        F T -> F
        T F -> F
        F F -> F
    }
    || = Logical Or
    {
        T T -> T
        F T -> T
        T F -> T
        F F -> F
    }
    ! = Logical not
    {
        T -> F
        F -> T
    }
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if ((a < 0) && (b > 0))
    {
        printf("\nTrue");
    }
    else
    {
        printf("\nFalse");
    }
    return 0;
}