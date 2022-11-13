#include<stdio.h>
#include<string.h>

int main()
{
    int i, j, arr[27];
    int max, max_index ;
    char str[1000];
    int count = 0;

    for(i=0; i < 26; i++)
    {
        arr[i]=0;
    }

    fgets(str, sizeof(str),stdin);
    int l = strlen(str)-1;

    for(i=0; i<l; i++)
    {
        arr[str[i]-97]++;
    }

    for(i=0; i < 26; i++)
    {
        if(arr[i]>0)
        {
            count++;
//            printf("%c : %d\n",i+97,arr[i]);
        }
    }

    for(i = 0 ; i < count ; i++)
    {
        max = 0, max_index = 0;

        for( j = 0; j < 26; j++)
        {
            if(arr[j] > max)
            {
                max = arr[j];
                max_index = j;
            }
        }

        for(j = 0; j < max; j++)
        {
            printf("%c", max_index+97);
        }

        arr[max_index] = 0;
    }





//    for( j = 0; j < 26; j++)
//    {
//        printf("%c %d\n",j+97,arr[j]);
//    }



    return 0;
}
