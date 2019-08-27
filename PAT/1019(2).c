#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b){
	return *(int *)a - *(int *)b;
}

int main(void){
	
	int n, diff, up, low, x, i, a[4] = {0};
	
	scanf("%d", &n);
	
	while(n != 0){
		x = n;
		for(i = 0; i < 4; i++){
			a[i] = x % 10;
			x /= 10;
		}
		qsort(a, 4, sizeof(a[0]), cmp);
		
		up = a[0] * 1000 + a[1] * 100 + a[2] * 10 + a[3];
		low = a[3] * 1000 + a[2] * 100 + a[1] * 10 + a[0];
		n = low - up;
		
		if(n == 0){
			printf("%04d - %04d = %04d\n", low, up, n);
		}
		else{
			printf("%04d - %04d = %04d\n", low, up, n);
			if(n == 6174){
				break;
			}
		}
	}
	
	return 0;
}
