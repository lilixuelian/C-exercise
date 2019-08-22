#include<stdio.h>
#include<math.h>

int between(int i, int n){
	int small = 2 * i * i - 1;
	int big = 2 * (i + 1) * (i + 1) - 1;
	if(n >= small && n < big){
		return 1;
	}
	else{
		return 0;
	}
}

void print(int i, char str){
	int k, j = 0;
	while(i > 1){
		for(k = 0; k < j; k++){
			printf(" ");
		}
		j++;
		for(k = 0; k < (2 * i - 1); k++){
			printf("%c", str);
		}
		i--;
		printf("\n");
	}
	while(j >= 0){
		for(k = 0; k < j; k++){
			printf(" ");
		}
		j--;
		for(k = 0; k < (2 * i - 1); k++){
			printf("%c", str);
		}
		i++;
		printf("\n");
	}
}

int main (void){
	
	int n, i, remain;
	char str;
	
	scanf("%d %ch", &n, &str);
	
	for(i = 0; i <= sqrt(n) + 1; i++){
		if(between(i, n)){
			print(i, str);
			
			remain = n - (2 * i * i - 1);
			printf("%d", remain);
			break;
		}
	}	
	
	
	return 0;
}
