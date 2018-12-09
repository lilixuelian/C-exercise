#include<stdio.h>

int main (void){
	
	int n, i;
	int a[10][3];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
	}
	
	for(i = 0; i < n; i++){
		if((a[i][0] + a[i][1]) > a[i][2])
		printf("Case #%d: ture\n", i);
		else
		printf("Case #%d: false\n", i);
	}
	
	return 0;
}
