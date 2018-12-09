#include<stdio.h>

int main (void){
	
	int a[100000];
	int n, m, i, j, k;
	
	//输入n和m 
	while(scanf("%d %d", &n, &m)!=EOF){
		//输入n个数字 
	    for(i = 0; i < n; i++){
		    scanf("%d", a[i]);
    	}
	
	//n个数字排序 
    	for(j = 0; j < n; j++){
	    	for(k = n - 1; k > j; k--){
	    		if(a[k - 1] < a[k]){
		    		int temp = a[k];
		    		a[k] = a[k - 1];
		    		a[k - 1] = temp;
		    	}
	    	}
    	}
	
	//n个数字中挑m个输出 
	    for(i = 0; i < m; i++){
	    	printf("%d", a[i]);
    	}
	}
	return 0;
} 
