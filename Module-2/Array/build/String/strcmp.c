// WAP to compare the two string
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10];
    int cmp;
    printf("Enter first String : ");
    gets(s1);
    printf("\n");
    printf("Enter second String:  ");
    gets(s2);
    cmp = strcmp(s1, s2);
    if (cmp == 0)
    {
        printf("\nBoth are equal. ");
    }
    else if (cmp > 0)
    {
        printf("\n1st string is max.");
    }
    else{
        printf("\n2nd string is max.");
    }
    return 0;
}