#include<stdio.h>

int sum_count(x){
	int sum = 0;
	int d;
	do{
		d = x % 10;
		x /= 10;
		sum += d;
	}while(x > 0);
	
	return sum;
}

int main (void){
	
	int n, i, j, k;
	int sum[100];
	int b[100], a[100], c[100];
	
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
		sum[i] = sum_count(a[i]);
	}
	
	
	for(i = 0; i < n - 1; i++){
		for(j = n - 1; j > i; j--){
			if(sum[j - 1] >= sum[j]){
				int temp = sum[j];
				sum[j] = sum[j - 1];
				sum[j - 1] = temp; 
			}
		}
	}
	
	k = 0;
	for(i = 1; i < n; i++){
		if(sum[i] != sum[i - 1]){
		 	k++;
			c[k] = i;
		}
	}
	
	printf("%d\n", k + 1);
	printf("%d ", sum[0]);
	for(i = 1; i < k; i++){
		printf("%d ", sum[c[i]]);
	}
	printf("%d", sum[c[k]]);
    
	return 0;
} 
