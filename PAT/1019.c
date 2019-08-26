#include<stdio.h>

int upper(int n){
	int i, j, temp, a[4];
	
	for(i = 0; i < 4; i++){
		a[i] = n % 10;
		n /= 10;
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3 - i; j++){
			if(a[i] > a[i + 1]){
				temp = a[i + 1];
				a[i + 1] = a[i];
				a[i] = temp;
			}
		}
	}
	for(i = 0; i < 3; i++){
		x = a[i] * 10 + a[i + 1];
	}
	return x;
}

int lower(int n){
	int i, j, temp, a[4];
	
	for(i = 0; i < 4; i++){
		a[i] = n % 10;
		n /= 10;
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3 - i; j++){
			if(a[i] < a[i + 1]){
				temp = a[i + 1];
				a[i + 1] = a[i];
				a[i] = temp;
			}
		}
	}
	for(i = 0; i < 3; i++){
		x = a[i] * 10 + a[i + 1];
	}
	return x;
}

int main(void){
	
	int n, diff, up, low;
	
	scanf("%d", n);
	
	up = upper(n);
	low = lower(n);
	diff = low - up;
	
	while(diff != 6174){
		printf("%d - %d = %d", low, up, diff);
		up = upper(diff);
		low = lower(diff);
		diff = low - up;
	}
	
	return 0;
}
