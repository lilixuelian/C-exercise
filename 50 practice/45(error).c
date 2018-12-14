#include<stdio.h>
#include<string.h>

int main (void){
	
	int a1, a2, a3;
	char str[100];
	int i, len;
	
	while(scanf("%s", str) != EOF){
		if(str == 'E')
		    break;
		
		a1 = a2 = a3 = 0;
		len = strlen(str);
		
		for(i = 0; i < len; i++){
			if(str[i] == 'Z'){
				a1++;
			}
			if(str[i] == 'O'){
				a2++;
			}
			if(str[i] == 'J'){
				a3++;
			}
		}
		while (a1 != 0 || a2 != 0 || a3 != 0){

			if (a1 != 0){
				a1--;
				printf("Z");
			}

			if (a2 != 0){
				a2--;
				printf("O");
			}

			if (a3 != 0){
				a3--;
				printf("J");
			}

		}
	
	return 0;
}
