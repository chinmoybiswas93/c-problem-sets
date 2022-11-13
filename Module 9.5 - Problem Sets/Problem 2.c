/*
You will be given an positive integer N and after that an integer array of size N. Then you will be given Q which
refers to queries. For each query you will be given i and v where i refers to the index and v to value. You need to
add the value to that index. After all of the queries print the values

Sample Input:               Sample Output:
5                           11 2 8 4 10
1 2 3 4 5
3
0 10
2 5
4 5

*/

#include<stdio.h>

int main () {
    int n, i, arr[100],change, index, value;
    scanf("%d",&n);

    for(i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    scanf("%d",&change);

    for(i=0; i<change; i++){
        scanf("%d %d",&index, &value);
        arr[index] = arr[index] + value;
    }

    for(i=1; i < n ; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
