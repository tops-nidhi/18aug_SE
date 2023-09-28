// WAP to print A to E using for loop
#include<stdio.h>
int main()
{
    int i;
    for(i = 65; i < 70; i++)
    {
        printf("%c", (char)i); // %c is used here instead of printf("A");
    }
    return 0;
}