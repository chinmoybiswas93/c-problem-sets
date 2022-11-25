#include<stdio.h>
int print_star(int max,int i);

int main () {
    int n,i,max;
    printf("Enter any integer: ");
    scanf("%d",&n);
    max = 2 * n - 1 ;
    for(i = n ; i > 0 ; i--) {
        print_star(max,i);
        printf("\n");
    }
    return 0;
}

int print_star(int max, int j) {
    int total, spaces, start, end, i;
    total = 2 * j - 1;
    spaces = max - total;
    start  = spaces / 2;
    end = start + total + 1;

    for(i = 1 ; i <= max; i++) {
        if(i > start && i < end) {
            printf("*");
        }
        else {
            printf(" ");
        }
    }
    return 0;
}
