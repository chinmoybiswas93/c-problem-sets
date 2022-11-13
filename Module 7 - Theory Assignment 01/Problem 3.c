#include<stdio.h>

int main () {
    long long int n;
    int count = 0;
    scanf("%d", &n);

    while(n > 0) {
        count++;
        n = n / 10;
    }
    printf("%d\n", count);

    return 0;
}

/*You will be given a number as input. You will have to find the number of digits in that number.
You will have to use loops to solve this problem as the input can have any number of digits.
[Hint: Use the modulus operator. You can extract last digit from any number by using %10 operation on the number.]
For example,
Sample Input:
2346167
Sample Output:
7 digits*/

