#include<stdio.h>
int calc_sum(int n)
{
    if(n == 0) {
        return 0;
    }
    else {
        return n + calc_sum(n-1);
    }
}
int main ()
{
    int n,sum;
    scanf("%d",&n);
    sum = calc_sum(n);
    printf("%d", sum);
    return 0;

}

