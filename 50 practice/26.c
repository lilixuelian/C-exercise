#include<stdio.h>

int main (void){
	
	int m, n;
	int i = 1;
	
	scanf("%d %d", &m, &n);
	
	while((i % m != 0) || (i % n != 0)){
		i++;
	}
	
	printf("%d", i);
	
	return 0;
}
