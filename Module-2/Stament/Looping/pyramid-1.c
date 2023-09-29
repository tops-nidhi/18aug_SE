#include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 5; i++) //outer loop use for the row
    {
        for(j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) // inner loop use for the column
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5