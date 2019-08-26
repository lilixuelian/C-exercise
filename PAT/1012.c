#include<stdio.h>

int main (void){
	
	int i, n, x, t = 0, m, cnt[6] = {0};
	float a[6] = {0};
	
	scanf("%d", &n);
	  
	for(i = 0; i < n; i++){
		scanf("%d", &x);
		
		m = x % 5;
		
		switch( m ){
			case 0: if(x % 2 == 0) { a[1] += x; cnt[1]++;} break;
			case 1: if(cnt[2] % 2){ x = -x; } a[2] += x; cnt[2]++; break;
			case 2: a[3]++; cnt[3]++; break;
			case 3: cnt[4]++; a[4] += x; break;
			case 4:	if(x > a[5]) a[5] = x; cnt[5]++; break;
		}
	}
	
	if(a[4] != 0) a[4] /= cnt[4];
	
	for(i = 1; i <= 5; i++){
		if(a[i] == 0 && cnt[i] == 0){
			printf("N");
		}
		else{
			if(i == 4){
				printf("%.1f", a[i]);
			}
			else{
				printf("%.0f", a[i]);
			}
		}
		if(i <= 4){
			printf(" ");
		}
		
	}
	return 0;
}
