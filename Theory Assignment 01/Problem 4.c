#include<stdio.h>

int main () {
    long long int n;
    int sum = 0, digit;

    scanf("%d", &n);

    while( n > 0 ) {
        digit = n % 10;
        sum = sum + digit;
        n = (n - digit) / 10;
    }
    printf("%d\n", sum);
    return 0;
}




/*
This time you need to find the sum of the digits of the input. So look at the sample input output.
Sample Input:
2346167
Sample Output:
29
Explanation: Since, the sum of the digits is 2+3+4+6+1+6+7 = 29. So the output is 29.
*/
