#include<stdio.h>
int main ()
{
    int *x, *y, a, b;
    float sum;
    scanf("%d %d", &a, &b);

    x = &a;
    y = &b;

    sum = *x + *y;
    printf("%.3f\n",sum/2);

}

//You are given two integer x and y. Now you have to find the average of this two integer. Implement this by using
//pointers.
//Sample Input:         Sample Output:
//13 2                  7.500

