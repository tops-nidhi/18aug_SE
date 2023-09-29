#include<stdio.h>
int main()
{
    int i, j, no = 97;
    for(i = 1; i <= 5; i++) //outer loop use for the row
    {
        for(j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) // inner loop use for the column
        {
            printf("%c ", no);
            no++;
        }
        printf("\n");
    }
    for(i = 5; i >= 1; i--) //outer loop use for the row
    {
        for(j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) // inner loop use for the column
        {
            printf("%c ", no);
            no++;
        }
        printf("\n");
    }
    return 0;
}
