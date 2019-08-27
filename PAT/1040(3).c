#include <stdio.h>

#define lim 1000000007

int main()
{
    int p = 0, pa = 0, pat = 0;
    char c;

    while((c = getchar()) != '\n'){
        if(c == 'P') p++;
        if(c == 'A') pa = (pa + p) % lim;
        if(c == 'T') pat = (pat + pa) % lim;
    }
    printf("%d", pat);
    return 0;
}

