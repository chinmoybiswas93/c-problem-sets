#include<stdio.h>

int main () {

    int a, b;

    printf("Enter The First number: ");
    scanf("%d",&a);

    printf("Enter The second number: ");
    scanf("%d",&b);

    if ( a % b == 0 ) {
        printf("The first number is divisible by the second number.\n");
    }
    else if ( b % a == 0) {
        printf("The second number is divisible by the first number.\n ");
    }
    else {
        printf("None of them are divisible by the other. ");
    }

    return 0;
}



/*
Write a C program that will take two integers as input from you.
And then it will show us in output whether any one of those two numbers is divisible by the other or not.

Sample Input 1:
Enter the first number: 13
Enter the second number: 39

Sample Output 1:
The second number is divisible by the first number.

Sample Input 2:
Enter the first number: 38
Enter the second number: 13

Sample Output 2:
None of them are divisible by the other.

*/
