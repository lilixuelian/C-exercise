#include <stdio.h>
//��һ��Ľ��ĵط��������һ��������ո�ķ�ʽ���úÿ�Ŷ 
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

