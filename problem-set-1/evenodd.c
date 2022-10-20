#include<stdio.h>

int main ()
{
    int a;

    printf("Enter First Number: \n");
    scanf("%d" , &a);

    if(a % 2 == 0) {
        printf("Even");
    }
    else {
        printf("Odd");
    }
}
