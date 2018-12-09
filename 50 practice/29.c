#include<stdio.h>

int main(void){
	
	int n, i;
	int a[10];
	int sum = 0;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
		
		sum += 22 * a[i];
	}
	
	
	
	printf("%d", sum);
	
	return 0;
}
