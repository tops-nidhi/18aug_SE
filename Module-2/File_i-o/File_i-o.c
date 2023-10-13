#include<stdio.h>
int main()
{
    FILE *fptr;
    char ch[10];
    fptr = fopen("Hello.txt", "a");
    fprintf(fptr, "%s","nidhi");
    fclose(fptr);

    fptr = fopen("Hello.txt", "r");
    fscanf(fptr, "%s", &ch);
    printf("%s", ch);
    fclose(fptr);
    return 0;
}