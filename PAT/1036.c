#include<stdio.h>

int main (void){
	
	int n, i, col, k;
	char ch;
	
	scanf("%d %c", &n, &ch);
	
	if(n == 1){
		printf("%c", ch);
	}
	else if(n == 2){
		printf("%c%c", ch, ch);
	}
	else{
			if(n % 2){
		col = n / 2 + 1;
	} 
	else{
		col = n / 2;
	}
	
	for(k = 0; k < n; k++){
		printf("%c", ch);
	}
	printf("\n");
	for(i = 2; i < col; i++){
		printf("%c", ch);
		for(k = 0; k < n - 2; k++){
			printf(" ");
		}
		printf("%c\n", ch);
	}
	for(k = 0; k < n; k++){
		printf("%c", ch);
	}
	}
	
	return 0;
}
