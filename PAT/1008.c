#include<stdio.h>

int main (void){
	
	int i, m, n, a[102];
	
	scanf("%d %d", &m, &n);
	
	for(i = 0; i < m; i++){
		scanf("%d", &a[i]);
	}
	
	if(n > m){
		n %= m;
	}
	
	for(i = m - n; i <= m - 1; i++){
		printf("%d ", a[i]);
	}
	for(i = 0; i <= m - n - 1; i++){
		printf("%d", a[i]);
		if(i < m - n - 1){
			printf(" ");
		}
	}
	
	return 0;
}
