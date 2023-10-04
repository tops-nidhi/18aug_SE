// WAP to copy the string using strcpy;
#include <stdio.h>
#include<string.h>
int main() {
    char str1[50],str2[50];
    printf("Enter a string: ");
    scanf("%s", &str1); // read input from user into array of chars (string)
    strcpy(str2,str1);//copy contents of first string in second one
    printf("\nThe copied string is %s\n",str2 );
    return 0;
}