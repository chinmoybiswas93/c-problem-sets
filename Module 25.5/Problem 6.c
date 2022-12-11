#include<stdio.h>

int solve(int *a, int *b, int *c){
    int temp = *a + *b + *c;
    *a = temp;
}

int main(){
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    solve(&a, &b, &c);
    printf("%d", a);
}
