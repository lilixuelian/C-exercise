#include<stdio.h>
int main (void){
	
	int n;
	int a[1001];
	int i;
	
	a[1] = 0;
	a[2] = 2;
	a[3] = 2;
	
	for(i = 4; i < 1001; i++){
		a[i] = (a[i - 1] + a[i - 2] * 2) % 10000;
	}
	
	while(scanf("%d", &n), n){
		printf("%d\n", a[n]);
	}
	
	return 0;
} 
