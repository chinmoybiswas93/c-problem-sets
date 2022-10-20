#include<stdio.h>

int main ()
{
    int a;

    printf("Enter Number: \n");
    scanf("%d" , &a);

    if(a >= 0 && a <= 32 ) {
        printf("F");
    }
    else if (a <= 39 ) {
        printf("D");
    }
    else if (a <= 49 ) {
        printf("C");
    }
    else if ( a <= 59 ) {
        printf("B");
    }
    else if ( a <= 69 ) {
        printf("A-");
    }
    else if ( a <= 79 ) {
        printf("A");
    }
    else {
        printf("A+");
    }
}

