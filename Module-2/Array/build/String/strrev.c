// WAP to reverse the string
#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    printf("Enter a String : ");    
    gets(str);
    strrev(str);
    printf("\nReversed String is %s", str);     //reverse function in string.h header file
    return 0;
}