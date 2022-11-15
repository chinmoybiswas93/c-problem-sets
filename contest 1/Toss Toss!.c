#include <stdio.h>
int main()
{
    int T,j;
    scanf("%d",&T);
    for(j = 0; j < T ; j++)
    {
        int i, n, hc=0, tc=0;
        scanf("%d",&n);
        char name[20];
        scanf("%s", name);
        for(i = 0; i < n ; i++)
        {
            if(name[i] == 'H')
            {
                hc++;
            }
            else
            {
                tc++;
            }
        }
        if(hc > tc)
            printf("England\n");
        else
            printf("Pakistan\n");
    }


    return 0;
}
