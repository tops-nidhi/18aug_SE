// WAP to concat the two string strcat function
#include<stdio.h>
#include<string.h>

int main()
{
    char fnm[20], lnm[20];
    printf("Enter the your first name: ");
    scanf("%s", &fnm);
    printf("Enter your last name: ");
    scanf("%s", &lnm);
    // gets(lnm); //to get string
    strcat(fnm, lnm);
    printf("\nYour full name is: %s", fnm);
    return 0;
}