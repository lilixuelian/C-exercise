#include<stdio.h>

int main (void){
	
	int m, n, i, j;
	int num = 0;
	int a[10000];
	int k = 0;
	
	scanf("%d %d", &m, &n);
	
	for(i = 0; i < 10000; i++){
		int isprime = 1;
		for(j = 2; j < i - 1; j++){
			if( i % j == 0){
				isprime = 0;
				break;
			}
		}
		if( isprime ){
			a[k] = i;
			k++;
		}
	}
	
	for(k = m; k <= n; k++){
		printf("%d ", a[k + 1]);
	    num++;
	    if(num % 10 == 0){
	    	printf("\n");
		}
	    
	}
	
	return 0;
}
