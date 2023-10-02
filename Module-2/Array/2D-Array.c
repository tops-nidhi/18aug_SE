#include <stdio.h>
int array[3][3];
int i, j;
void get()
{
    printf("Enter the value: ");
    scanf("%d", &array[i][j]);
}
void show()
{
    printf("Value of the array is : %d\n", array[i][j]);
}
int main()
{
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            get();
            printf("\n");
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            show();
            printf("\n");
        }
        printf("\n");
    }
}