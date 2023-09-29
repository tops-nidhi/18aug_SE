#include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 5; i++) //outer loop use for the row
    {
        for (j = 5; j >= i; j--) // inner loop use for the column
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}