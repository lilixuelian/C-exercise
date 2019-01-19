#include<stdio.h>

int main (void){
	
	char str[100];
	int a = 0, z = 0, p = 0, t = 0, i = 0;
	
	scanf("%s", str);
	
	while(str[i] != '\0'){
		
		if(str[i] == 'A'){
			a++;
		}
		if (str[i] == ' '){
			z++;
		}
		if(str[i] == 'P'){
			p++;
	    }
	    if(str[i] == 'T'){
	    	t++;
	    }
		i++;
	}
	printf("i = %d, a = %d, z = %d, p = %d, t = %d", i, a, z, p, t); 
} 
