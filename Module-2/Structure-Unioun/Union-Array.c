// WAP to get the student id and name using structure
#include <stdio.h> // Header file for standard input/output functions
union Student
{ // Defines a student type with properties like id, name etc
    int id;
    char name[50];
};
int main()
{
    union Student obj[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter ID: ");
        scanf("%d", &obj[i].id); // Inputting data into struct variable
        printf("\n");
        printf("Enter Name: ");
        scanf("%s", &obj[i].name); // Inputting data into struct variable
    }
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        printf("ID = %d\tName = %s \n", obj[i].id, obj[i].name); // Printing values of variables

    }
}