// WAP to get 5 student's id using array
#include<stdio.h>
int array[5];
int i;
// Without return type without parameter
void get()
{
    printf("Enter the value: ");
    scanf("%d", &array[i]);
}
void show();
int main() {
    for(i = 0; i < 5; i ++)
    {
        get();
    }
    for(i = 0; i < 5; i ++)
    {
        show();
    }
}
void show()
{
    printf("Value of the array is : %d\n", array[i]);
}