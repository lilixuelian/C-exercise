#include<stdio.h>

int main (void){
	
	int a[100];
	int i, j, k, n;
	int min = 1000000;
	
	while((scanf("%d", &n)) != 0){
		for(i = 0; i < n; i++){
		    scanf("%d", &a[i]);
		    if(a[i] < min){
			    min = a[i];
			    k = i;
		    
			}
	    }
	
	    a[k] = n;
	    a[0] = min;
	
	    for(j = 0; j < n; j++){
		    printf("%d ", a[j]);
	    }
    }
	
	return 0;
}
