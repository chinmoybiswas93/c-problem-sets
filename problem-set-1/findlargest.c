#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter First Number: \n");
    scanf("%d" , &a);

    printf("Enter Second Number: \n");
    scanf("%d" , &b);

    if(a>b) {
        printf("%d is bigger",a);
    }
    else if(a==b) {
        printf("Both are equal");
    }
     else {
        printf("%d is bigger",b);
    }

    return 0;
}
