#include<stdio.h>

int main (void){
	
	int i, j, t;
	int a[100], b[100];
	
	scanf("%d", &t);
	
	for(i = 0; i < t; i++){
		scanf("%d %d", &a[i], &b[i]);
	}
	
	for(j = 0; j < t; j++){
		if((a[j] % b[j]) != 0){
			printf("NO\n");
		}  
	    else{
	    	printf("YES\n");
		}
	        
	}
	
	
	return 0;
}
