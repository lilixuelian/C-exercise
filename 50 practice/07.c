#include<stdio.h>

int main (void){
	
	int n, i, mul, num;
	
	while(scanf("%d", &n) != EOF){
		
		mul = 1;
	
	    for(i = 0; i < n; i++){
	    	scanf("%d", &num);
	    	
		    if(num % 2 == 1){
		    	mul *= num;
	       }
    	}
    	
		printf("%d\n", mul);
	}
	
	return 0;
} 
