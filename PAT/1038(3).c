#include <stdio.h>
//这一版改进的地方在于最后一个不输出空格的方式，好好看哦 
int main()
{
    int n, grade[101] = {0}, x;
    scanf("%d", &n);
    while(n--){
        scanf("%d", &x);
        grade[x]++;
    }
    scanf("%d", &n);
    while(n){
        scanf("%d", &x);
        printf("%d%c", grade[x], n > 1 ? ' ' : '\n');
        n--;
    }
    return 0;
}

