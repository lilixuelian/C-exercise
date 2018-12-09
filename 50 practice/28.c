#include<stdio.h>

int main (void){
	
	int n, i, j, k;
	char str[1000][1000];
	int cnt[1000];
	
	scanf("%d", n);
	
	for(i = 0; i < n; i++){
		scanf("%s", str[i]);
	}
	
	for(j = 0; j < n; j++){
		while(str[j][k]){
			
			if((str[j][k] >= '0') && (str[j][k] <= '9')){
				cnt[i]++;
			}
			k++;
		}
	}
	
	return 0;
}
