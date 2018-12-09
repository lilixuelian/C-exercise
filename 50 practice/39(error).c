#include<stdio.h>

int main (void){
	
	int i, n, end;
	int a[100]; 
	int sum = 0;
	int cnt = 0;
	
	do{
		scanf("%d", &n);
	    for(i = 0; i < n; i++){
		    scanf("%d", &a[i]);
	    }
	}while(scanf("%d", &end) == 0);
	
	for(i = 0; i < n; i++){
	    if(a[i] >= 100){
	    	cnt += a[i] / 100;
	    	a[i] -= 100 * cnt;
		}
		else if(a[i] >= 50 && a[i] != 0){
			cnt += a[i] / 50;
	    	a[i] -= 50 * cnt;
		}
		else if(a[i] >= 10 && a[i] != 0){
			cnt += a[i] / 10;
	    	a[i] -= 10 * cnt;
		}
		else if(a[i] >= 5 && a[i] != 0){
			cnt += a[i] / 5;
	    	a[i] -= 5 * cnt;
		}
		else if(a[i] >= 2 && a[i] != 0){
			cnt += a[i] / 2;
	    	a[i] -= cnt * 2;
		}
		else if(a[i] >= 1 && a[i] != 0){
			cnt += a[i];
		}
		printf("%d\n", cnt);
		sum += cnt;
	}
	
	printf("%d", sum);
	
	return 0;
}
