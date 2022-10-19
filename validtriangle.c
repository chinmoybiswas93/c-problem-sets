#include<stdio.h>

int main ()
{
    int a,b,c;

    printf("Enter First Number: \n");
    scanf("%d" , &a);

    printf("Enter Second Number: \n");
    scanf("%d" , &b);

    printf("Enter Third Number: \n");
    scanf("%d" , &c);

    if (a == 0 || b == 0 || c == 0) {
        printf("No");
    }
    else {
        if(a + b > c && a + c > b && b + c > a){
            printf("Yes");
        }
        else {
            printf("No");
        }
    }
}
