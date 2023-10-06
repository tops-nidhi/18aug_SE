#include<stdio.h>
int data(int *ptr)
{
    return *ptr;
}
int main()
{
    int a = 100;
    printf("Address of the a is: %d", data(&a));  // call by reference
    return 0;
}