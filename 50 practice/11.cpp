#include<stdio.h>

int main (void){
	
	int a[100000];
	int n, m, i, j, k;
	
	//����n��m 
	while(scanf("%d %d", &n, &m)!=EOF){
		//����n������ 
	    for(i = 0; i < n; i++){
		    scanf("%d", a[i]);
    	}
	
	//n���������� 
    	for(j = 0; j < n; j++){
	    	for(k = n - 1; k > j; k--){
	    		if(a[k - 1] < a[k]){
		    		int temp = a[k];
		    		a[k] = a[k - 1];
		    		a[k - 1] = temp;
		    	}
	    	}
    	}
	
	//n����������m����� 
	    for(i = 0; i < m; i++){
	    	printf("%d", a[i]);
    	}
	}
	return 0;
} 
