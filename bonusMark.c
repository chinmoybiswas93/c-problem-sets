#include<stdio.h>

int main()
{
    int a, b;

    printf("Enter Your Number: \n");
    scanf("%d" , &a);

    printf("Enter Bonus Number: \n");
    scanf("%d" , &b);

    if(a + b >= 100) {
        printf("Yes");
    }
     else {
        printf("No");
    }

    return 0;
}
