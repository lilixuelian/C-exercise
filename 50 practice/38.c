#include<stdio.h>

int main(void){
	
	int a[100][100];
	int sum[100];
	int i, j, n, m;
	
	scanf("%d %d", &n, &m);
	
	for(i = 0; i < n + 2; i++){
		for(j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i = 2; i < n + 2; i++){
		for(j = 0; j < m; j++){
			if(a[i][j] == a[1][j]){
				sum[i] += a[0][j];
			}
		}
		printf("%d\n", sum[i]);
	}
	
	return 0;
}
