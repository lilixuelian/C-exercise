#include<stdio.h>

int main (void){
	
	int n, i, x, min, max, sum;
	
	while(scanf("%d", &n) != EOF){
		scanf("%d", &x);
		min = max = sum = x;
		
		for(i = 1; i < n; i++){
			scanf("%d", &x);
			
			sum += x;
			max = (x > max) ? x : max;
			min = (x < min) ? x : min;
		}
		
		printf("%.2f\n", (double)(sum - max - min) / (n - 2));
	}
	
	return 0;
}
