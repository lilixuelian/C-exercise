#include<stdio.h>

int main (void){
	
	int a[10], i;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &a[i]);
	}
	
	if(a[0] != 0){
		for(i = 1; i < 10; i++){
			if(a[i] != 0){
				printf("%d", i);
				a[i]--;
				break;
			}
		}
		for(i = 0; i < a[0]; i++){
			printf("%d", 0);
		}
	}
	
	for(i = 1; i < 10; i++){
		while(a[i]){
			printf("%d", i);
			a[i]--;
		}
	}
	
	return 0;
}
