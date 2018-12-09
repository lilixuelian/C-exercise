#include<stdio.h>
int main (void){
	
	int n, i, j, k, t;
	double h;
	double max[100] = {0};
	
	scanf("%d", &t);
	
	for(k = 0; k < t; k++){
		scanf("%d", &n);
		
		for(i = 0; i < n; i++){
			scanf("%lf", &h);
			
			if(h > max[k]){
				max[k] = h;
			}
		
		}
	}
	
	for(j = 0; j < t; j++){
		printf("%.2f\n", max[j]);
	}
	
	return 0;
} 
