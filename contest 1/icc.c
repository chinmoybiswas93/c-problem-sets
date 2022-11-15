#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char greeting[] = "International Cricket Council";
    int len = strlen(greeting)-1;
    for(int i= len; i >= 0 ; i-- ){
        printf("%c", greeting[i]);
    }

    return 0;
}

