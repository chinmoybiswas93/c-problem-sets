/*
Write a C program to take a non-negative integer N and print the pattern as shown below
For N=5, the pattern should be
*
**
***
****
*****
Sample Input:           Sample Output:
4                       *
                        **
                        ***
                        ****
*/

#include<stdio.h>

int main () {
    int n,j, i;
    scanf("%d",&n);

    for(i=0; i < n; i++){
        for(j = 0 ; j <= i ; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
