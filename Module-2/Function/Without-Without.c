#include<stdio.h>
int id;
void get() {
    printf("Enter your ID: "); scanf("%d", &id); 
}
void print()
{
    printf("\nYour ID is %d\n", id );
}
int main()
{

    get();
    print();
    return 0;
}