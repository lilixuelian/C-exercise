#include<stdio.h>

int main (void){
	
	int a[51][6];
	int n, m, i, j;
	int sum = 0;
	
	scanf("%d %d", &n, &m);
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			scanf("%d ", a[i][j]);
			a[i][6] += a[i][j];
			a[51][j] += a[i][j];
		}
	}
	
	for(i = 0; i < n; i++){
		printf("%.2d ", a[i][6] / m);
	}
	
	for(j = 0; j < m; j++){
		printf("%.2d", a[51][j] / n);
	}
	
	for(i = 0; i < n; i++){
		for(j = 0; j < m; j++){
			if(a[i][j] < a[i][6] / m)
		    break;
		    else
		    sum = 1;
		}
		sum += sum;
	}
	
	
	return 0;
}
