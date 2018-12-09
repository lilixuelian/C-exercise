#include<stdio.h>

int main (void){
	
	int i, j, k, n, m;
	int a[1000][3];
	int b[1000];
	int c[1000];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		for(j = 0; j < 3; j++){
		    scanf("%s", &a[i][j]);
		}
	}
	
	scanf("%d", &m);
	
	for(k = 0; k < 2; k++){
		scanf("%d", b[k]);
        for(i = 0; i < n; i++){
        	if(a[i][1] == b[k]){
        		printf("%d %d", a[i][0], a[i][2]);
			}
		}
	}
	
	
	return 0;
}
