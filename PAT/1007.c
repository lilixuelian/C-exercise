#include<stdio.h>

int main(void){
	
	int n, k, i;
	int j = 0;
	int a[10000];
	int cnt = 0;
	
	scanf("%d", &n);
	
	for(i = 1; i < 10000; i++){
        int isPrime = 1;
		for(k = 2; k < i - 1; k++){
			if(i % k == 0){
				isPrime = 0;
				break;
			}
		}
		
		if(isPrime == 1){
			a[j] = i;
			j++;
		}
	}
	
	for( k = 1; k <= n; k++){
		if(a[k + 1] - a[k] == 2){
			cnt++;
		}
	}

	printf("%d", cnt / 2);
	
	return 0;
} 
