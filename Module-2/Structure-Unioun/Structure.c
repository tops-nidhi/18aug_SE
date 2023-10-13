// WAP to get the student id and name using structure
#include <stdio.h>  // Header file for standard input/output functions
struct Student {     // Defines a student type with properties like id, name etc
    int id;
    char name[50];
} st;
int main(){
    printf("Enter ID: ");
    scanf("%d", &st.id);    // Inputting data into struct variable
    printf("\n");
    printf("Enter Name: ");
    scanf("%s",&st.name);   // Inputting data into struct variable
    printf("\n");
    printf("ID = %d\tName = %s \n", st.id , st.name );      // Printing values of variables
}