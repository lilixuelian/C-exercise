#include<stdio.h>

void bsort(int c[], int j){
	int p, q;
	
	for(p = 0; p < j - 1; p++){
		for(q = j - 1; q > p; q--){
			if(c[q - 1] < c[q]){
				int temp = c[q];
				c[q] = c[q - 1];
				c[q - 1] = temp;
			}
		}
	}
}

int main (void){
	
	int n, i, j, p, q, k;
	int a[100], b[100], c[100];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	
	for(i = 0; i < n; i++){
		while(a[i] != 1){
			if(a[i] % 2 == 0){
				a[i] /= 2;
				for(k = 0; k < n; k++){
					if(b[k] == a[i]){
						b[k] = 0;
					}
				}
			}
			else{
				a[i] = (3*a[i] + 1) / 2;
				for(k = 0; k < n; k++){
					if(b[k] == a[i]){
						b[k] = 0;
					}
				}
			}
		}
	}
	j = 0;
	for(k = 0; k < n; k++){
		if(b[k] != 0){
			c[j] = b[k];
			j++;
		}
	}
	
	bsort(c, j);
	
	for(k = 0; k < j; k++){
		printf("%d", c[k]);
		if(k < j - 1){
			printf(" ");
		}
	}
	
	return 0;
}
