#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter First Number: \n");
    scanf("%d" , &a);

    printf("Enter Second Number: \n");
    scanf("%d" , &b);

    printf("Enter Third Number: \n");
    scanf("%d" , &c);

    if (a==b && b==c) {
        printf("They Are Equal");
    }
    else if (a==b) {
        if(a > c) {
            printf("A and B is Bigger");
        }
        else {
                printf("C is Bigger");
        }
    }
     else if (b==c) {
        if(b > a) {
            printf("B and C is Bigger");
        }
        else {
                printf("A is Bigger");
        }
    }
     else if (c==a) {
        if(c > b) {
            printf("C and A is Bigger");
        }
        else {
                printf("B is Bigger");
        }
    }
    else {
        if(a > b && a > c){
            printf("A is bigger");
        }
        else if (b > a && b > c) {
            printf("B is Bigger");
        }
        else {
            printf("C is bigger");
        }
    }

    return 0;
}
