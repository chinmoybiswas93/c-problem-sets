#include<stdio.h>
#include<string.h>

//calculating cost
int calculate_cost(char str[], int length)
{
    int cost = 0;
    for(int i = 0; i < length ; i++)
    {
        cost += str[i] - 96;
    }
    return cost;
}

//calculating power
int is_power_of_two(int cost)
{
    int power = 0;
    if(cost % 2 != 0)
        return 0;
    else
    {
        while(cost > 1)
        {
            if(cost % 2 == 0)
            {
                power++;
                cost = cost / 2;
            }
            else
            {
                power == 0;
                return 0;
            }
        }
    }

    return power;
}

//main function
int main ()
{
    char str[100];
    int length, cost, power;
    fgets(str, sizeof(str), stdin);
    length = strlen(str)-1;

    cost = calculate_cost(str, length);
    power = is_power_of_two(cost);

    if(power == 0)
        printf("NO");
    else
        printf("YES\ncost = 2^%d ",power);

}
