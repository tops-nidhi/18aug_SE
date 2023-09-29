#include<stdio.h>
int main()
{
    int i, j;
    for(i = 0; i < 5; i++) //outer loop use for the row
    {
        for (j = 0; j < 5; j++) // inner loop use for the column
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}