#include<stdio.h>
#include<string.h>

int check_pelindrome(char string[]){
    int i, length;
    int flag = 0;
    length = strlen(string);

    for(i=0;i < length/2 ;i++){
        if(string[i] != string[length-i-1]){
            flag++;
           }
        }
    return flag;
}


int main(void)
{
        char words[22];
        while(scanf("%21s", words) == 1){
            length = strlen(words);
            printf("%d\n", check_pelindrome(words));
        }


        return 0;
}
