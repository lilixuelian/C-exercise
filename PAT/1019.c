#include<stdio.h>
#include<stdlib.h>
int cmp1(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int cmp2(const void *a, const void *b){
	return *(int *)b - *(int *)a;
}

int upper(int n){
	int i, j, temp, a[4], x;
	
	for(i = 0; i < 4; i++){
		a[i] = n % 10;
		n /= 10;
	}
	qsort(a, 4, sizeof(a[0]), cmp1);
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
	qsort(a, 4, sizeof(a[0]), cmp2);
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
	
	if(diff == 0){
		printf("%04d - %04d = %04d\n", low, up, diff);
	}
	else{
		while(1){
		if(diff == 0){
			printf("%04d - %04d = %04d\n", low, up, diff);
			break;
		}
		else if(diff == 6174){
			printf("%04d - %04d = %04d\n", low, up, diff);
			break;
		}
		else{
			printf("%04d - %04d = %04d\n", low, up, diff);
			up = upper(diff);
			low = lower(diff);
			diff = low - up;
			if(diff == 6174){
				printf("%04d - %04d = %04d\n", low, up, diff);
				break;
			}
		}
	}
	}
	return 0;
}
