#include<stdio.h>

int main (void){
	
	int num, m, n, x, y;
	int i, j;
	int a[1000][1000];
	
	scanf("%d", &num);
	scanf("%d %d %d %d", &m, &n, &x, &y);
	
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			scanf("%d ", &a[i][j]);
		}
	}
	
	return 0;
}
