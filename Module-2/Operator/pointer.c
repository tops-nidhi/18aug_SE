// Pointer is use to store the address of the other variable
#include<stdio.h>
int main()
{
    int a = 6;
    int *ptr;
    ptr = &a;
    printf("Address of 'a' : %d\n", ptr); // Address of "a" will be stored in ptr
    // ++ptr;
    // printf("Address of 'a' : %d\n", ptr); // Address of "a" will be stored in ptr
    printf("\nValue of the a is: %d", *ptr);

    return 0;
}