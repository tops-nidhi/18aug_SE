#include<stdio.h>
int no;
int getData()
{
    printf("Enter the number of elements\n");
    scanf("%d",&no);
    return 0;
}
int display()
{
    return no;
}
int main()
{
    getData();
    printf("Value of the no is: %d", display());
}