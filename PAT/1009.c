#include<stdio.h>
#include <string.h>

int main (void){
	
	char str[81];
	int n, j = 0, i;
	int b[80];
	
	gets(str);
	
	n = strlen(str);
	
	for(i = 0; i < n; i++){
		if(str[i] == ' '){
			b[j++] = i;
		}
	}
	
	for(i = str[b[j] + 1]; i < str[n]; i++){
		printf("%s", str[i]);
	}
	
	printf(" ");
	
	while(j >= 0){
		for(i = str[b[j] + 1]; i < str[b[j + 1] - 1]; i++){
			printf("%s", str[i]);
		}
		printf(" ");
		j--;
	}
	
	return 0;
}
