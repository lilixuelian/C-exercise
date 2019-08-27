#include<stdio.h>

int main (void){
	
	char str[1001][20], x, ch;
	int m, n, i, j, k, s;
	
	scanf("%d", &n);
	fflush(stdin);
	
	for(i = 0; i < n; i++){
		s = 0;
		while((ch = getchar()) != '\n'){
			str[i][s] = ch;
			s++;
		}
	}
	
	scanf("%d", &m); 
	fflush(stdin);
	for(i = 0; i <= m; i++){
		scanf("%c", &x);
		for(j = 0; j < n; j++){ 
			if(x == str[j][17]){
				for(k = 0; k < 17; k++){
					printf("%c", str[j][k]);
				}
				printf("%c\n", str[j][19]);
			}
		}
	}
	
	return 0;
}
