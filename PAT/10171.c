#include<stdio.h>
#include<string.h>

int main (void){
	
	int b, q, r, a, i;
	char str[1001];
	
	scanf("%s %d", str, &b);
	
	if(strlen(str) == 1){
		printf("%d %d", (str[0] - '0') / b, (str[0] - '0') % b);
	}
	else{
		if(str[0] - '0' > b || strlen(str) == 1){
			printf("%d", (str[0] - '0') / b);
			a = ((str[0] - '0') % b) * 10 + (str[1] - '0');
		}
		else{
			a = (str[0] - '0') * 10 + (str[1] - '0');
		}
		r = a % b;
		q = a / b;
		printf("%d", q);
		
		for(i = 1; i < strlen(str) - 1; i++){
			a = r * 10 + (str[i + 1] - '0');
			q = a / b;
			printf("%d", q);
			r = a % b;
		}
	
		printf(" %d", r);
		
	}
	
	return 0;
} 
