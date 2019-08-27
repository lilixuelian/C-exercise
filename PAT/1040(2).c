#include<stdio.h>
#include<string.h>

int main (void){
	
	char str[100000];
	int cnt = 0, flag, i, j, k;
	
	scanf("%s", str);
	
	for(i = 0; i < strlen(str); i++){
		flag = 0;
		if(str[i] == 'P'){
			for(j = i; j < strlen(str); j++){
				if(str[j] == 'A'){
					for(k = j; k < strlen(str); k++){
						if(str[k] == 'T'){
							cnt++;
							if(cnt == 1000000007){
								cnt = 0;
							}
						}
					}
				}
			}
		}
	}
	
	printf("%d", cnt);
	
	return 0;
} 
