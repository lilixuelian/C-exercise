#include<stdio.h>

int upper(int n){
	int i, j, temp, a[4], x;
	
	for(i = 0; i < 4; i++){
		a[i] = n % 10;
		n /= 10;
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3 - i; j++){
			if(a[j] > a[j + 1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	x = a[0];
	for(i = 0; i < 3; i++){
		x = x * 10 + a[i + 1];
	}
	return x;
}

int lower(int n){
	int i, j, temp, a[4], x;
	
	for(i = 0; i < 4; i++){
		a[i] = n % 10;
		n /= 10;
	}
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3 - i; j++){
			if(a[j] < a[j + 1]){
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	x = a[0];
	for(i = 0; i < 3; i++){
		x = x * 10 + a[i + 1];
	}
	return x;
}

int main(void){
	
	int n, diff, up, low;
	
	scanf("%d", &n);
	
	up = upper(n);
	low = lower(n);
	diff = low - up;
	
	if(up != low){
		do{
			printf("%04d - %04d = %d\n", low, up, diff);
			up = upper(diff);
			low = lower(diff);
			diff = low - up;
		}while(diff != 6174);
		
		printf("%04d - %04d = %d\n", low, up, diff);
	}
	else{
		printf("%04d - %04d = %04d\n", low, up, diff);
	}
	
	
	return 0;
}
