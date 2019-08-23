#include<stdio.h>
#include<math.h>

int main (void){
	
	int n, a, b, i;
	float sum, max = 0;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d %d", &a, &b);
		sum = sqrt(a * a + b * b);
		if(sum > max){
			max = sum;
		}
	}
	
	printf("%.2f", max);
	
	return 0;
}
