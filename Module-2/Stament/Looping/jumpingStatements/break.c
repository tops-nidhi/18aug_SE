// WAP to break the loop if value is five.
#include<stdio.h>
int main() {
    int i;
    for(i = 1; i < 10; ++i )
    {
        if( i  == 5 )
        {
            break; // to stop the loop
        }
        printf("\n%d", i);
    }
}