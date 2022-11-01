/*
Write a C program to take one positive integer N, the size of an array of unique values as input. Then take an
integer array of size N as input. After that take another integer target. You need to tell if you can make target by
adding any two different values from that array.
Hint: Use nested loop
Sample Input:           Sample Output:
5                       YES
2 4 3 6 8
7
Sample Input:           Sample Output:
5                       NO
2 4 3 1 8
8
*/

#include<stdio.h>

int main () {
    int n, i, j, arr[1000], sum, flag = 0;
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&sum);

    for(i=0; i<n; i++){
        for(j = i + 1 ; j < n ; j++){
            if(arr[i] + arr[j] == sum){
                flag = 1;
                break;
            }
        }
    }

    if(flag == 0) {
        printf("No");
    }
    else {
        printf("Yes");
    }

    return 0;
}
