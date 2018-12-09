#include<stdio.h>

int main (void){
	int m, n, a, b, x, i, j;
	int s[100][500];
	
	
	scanf("%d %d %d %d %d", &m, &n, &a, &b, &x);
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &s[i][j]);
		}
	}
	
	for(i = 0; i < m; i++){
		for(j = 0; j < n; j++){
			if((s[i][j] >= a) && (s[i][j] <= b)){
				s[i][j] = x;
			}
			
			printf("%.3d", s[i][j]);
			if(j < n){
				printf(" ");
			}
		}
		
		printf("\n");
	}
	
	return 0;
} 
