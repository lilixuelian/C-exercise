#include<stdio.h>

int main (void){
	
	int n, i, j, flag = 1, max = 0;
	int a[100000][2], b[100000][2] = {0};
	
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d %d", &a[i][0], &a[i][1]);
	}
	
	for(j = 1; j <= n; j++){
		for(i = 0; i < n; i++){
			if(a[i][0] == j){
				b[j][1] += a[i][1];
			}
			if(b[j][1] > max){
				max = b[j][1];
				flag = j;
			}
		}
	}
	printf("%d %d", flag, max);
	
	return 0;
}
