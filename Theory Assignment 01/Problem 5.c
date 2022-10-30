#include<stdio.h>

int main () {

    int n;
    scanf("%d",&n);
    while(n > 0) {
        if( n % 2 == 0 ) {
            printf("%d, ",n);
            n = n / 2;
        }else {
            printf("%d, ",n);
            n = n - 1;

        }
    }
return 0;
}


/*
Let us create a new version of weird algorithm.
You will be given an integer, n as input.
If n is even, divide it by two.
If n is odd, then subtract 1 from n.
Eventually it will end at 1.
So print the whole sequence. For example,
Sample Input:
123
Sample Output:
123, 122, 61, 60, 30, 15, 14, 7, 6, 3, 2, 1
Follow the whole output format(each numbers separated by commas).
*/
