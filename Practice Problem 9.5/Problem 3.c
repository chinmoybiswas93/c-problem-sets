/*
Write a C program to take one positive integer N, the size of an array as input. Then take an integer array of size
N as input and tell if the array contains only one unique value or not. Print “YES” or “NO”.

Sample Input 1:             Sample Output 1:
5                           NO
2 4 2 2 4
Sample Input 2:             Sample Output 2:
5                           YES
4 4 4 4 4

*/

#include<stdio.h>

int main () {
    int n, i, arr[100], flag = 0;
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(i=1; i < n; i++){
        if(arr[0] != arr[i]){
            flag = 1;
        }
    }

    if(flag == 1) {
        printf("No");
    }
    else {
        printf("Yes");
    }

    return 0;
}
