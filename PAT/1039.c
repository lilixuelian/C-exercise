#include<stdio.h>
#include<string.h>

int main (void){
	
	int cnt = 0, lack = 0, flag = 1, i;
	char str[10000], ch;
	
	scanf("%s", str);
	
	fflush(stdin);
	while((ch = getchar()) != '\n'){
		i = 0;
		cnt++;
		while(ch != str[i]){
			i++;
			if(i == strlen(str)){
				flag = 0;
				lack++;
			}
		}
		if(ch == str[i]){
			str[i] = '*';
		}
	}
	
	if(flag){ 
		printf("Yes %d", (strlen(str) - cnt));
	}
	else{
		printf("No %d", lack);
	}
	
	return 0;
} 
