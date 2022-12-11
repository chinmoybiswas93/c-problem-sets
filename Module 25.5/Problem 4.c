#include<stdio.h>
int print_numbers(int n)
{
    printf("%d ", n);
    if(n==1)
    {
        return 0;
    }
    else
    {
        return print_numbers(n-1);
    }
}
int main ()
{
    int n;
    scanf("%d",&n);
    print_numbers(n);
    return 0;

}
