#include<stdio.h>

int main (void){
	
	int n, a, b, c;
	int i = 1;
	
	scanf("%d", &n);
	
	a = n / 100;
	b = (n - 100 * a) / 10;
	c = n % 10;
	
	while(a > 0){
		printf("B");
		a--;
	} 
	while(b > 0){
		printf("S");
		b--;
	}
	while(i <= c){
		printf("%d", i);
		i++;
	}
	
	return 0;
}
