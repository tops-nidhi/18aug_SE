#include<stdio.h>
int main()
{
    int i, j, no = 1;
    for(i = 1; i <= 5; i++) //outer loop use for the row
    {
        for(j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++) // inner loop use for the column
        {
            printf("%d ", no);
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
            printf("%d ", no);
            no++;
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
// ----------------------
// 1 2 3 4 5
//  1 2 3 4
//   1 2 3
//    1 2
//     1
// ----------------------
//     1
//    2 3
//   4 5 6
//  7 8 9 10
// 11 12 13 14 15