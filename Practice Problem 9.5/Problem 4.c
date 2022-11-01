/*
Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
N as input. You need to print the values and for every value, you need to print other values than that. See the
samples for more clarification.
Hints: Use nested loop

Sample Input:               Sample Output:
5                           1 - 2 3 4 5
1 2 3 4 5                   2 - 1 3 4 5
                            3 - 1 2 4 5
                            4 - 1 2 3 5
                            5 - 1 2 3 4
*/

#include<stdio.h>

int main () {
    int n, i,j, arr[100];
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < n; i++){
        printf("%d - ", arr[i]);
        for(j = 0 ; j < n ; j++) {
            if(i == j) continue;
            printf("%d ", arr[j]);
        }
        printf("\n");
    }

    return 0;
}
