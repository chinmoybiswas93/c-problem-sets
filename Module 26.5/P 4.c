#include <stdio.h>
float calc_area (int r)
{
    return (3.14)*r*r;;
}
int main()
{
    int r;
    scanf("%d",&r);
    float area = calc_area(r);
    printf("%f",area);
    return 0;
}
