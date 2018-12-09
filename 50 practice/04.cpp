#include<stdio.h>

int main (void){
	int i, j;
	int m = 0;
	
	for(i = 0; i < 100; i++){
		for(j = 2; j < i-1; j++){
			if(i % j != 0){
				printf("%2d ", i);
			    m++;
			}
			if(m % 5 == 0)
			    printf("\n");
			
			break;
		}
	}
	
	return 0;
}
