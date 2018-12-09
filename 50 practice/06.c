#include<stdio.h>
#include<math.h>

int main(void){
	
	int n, i, j, a[100];
	
	while(scanf("%d", &n) && n!= 0){
		for(i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		
		for(i = 0; i < n - 1; i++){
			for(j = 0; j < n - 1 - i; j++){
				if(abs(a[j]) < abs(a[j + 1])){
					int temp = a[j];
					    a[j] = a[j + 1];
					    a[j + 1] = temp;
				}
			}
		}
		
		for(i = 0; i < n; i++){
			if(i < n - 1){
				printf("%d ", a[i]); 
			}
			else
			    printf("%d", a[i]);
		}
		printf("\n");
	}
	
	return 0;
} 
