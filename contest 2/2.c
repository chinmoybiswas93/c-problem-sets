#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int j = 0; j < t ; j++)
    {
        double n, power;
        int result;

        scanf("%lf", &n);

        if(n == 0)
        {
            printf("%d",1);
        }
        else
        {
            power = ceil(log2(n));

            printf("%0.0f\n", pow(2, power) );
        }
    }

    return 0;
}
