/*
a = 8; b = 2;
    a += b -> a = a + b -> a = 8 + 2 -> a = 10
    a -= b -> a = a - b -> a = 10 - 2 -> a = 8;
    b *= a -> b = b * a -> b = 2 * 8 -> b = 16;
    a/=b; 
    a%=b;
*/
#include<stdio.h>
int  main()
{
    int a, b;
    printf("Enter two numbers: "); //to get the value
    scanf("%d %d", &a,&b); //to store the value
    a/=b;
    printf("Addition is: %d", a);
    
    return 0;
}