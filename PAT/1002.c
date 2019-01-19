#include<stdio.h>

int main (void){
	
	int n, x, t, i;
	int sum = 0;
	int mask = 1;
	char str[100];
	
	scanf("%s", str);
	i = 0;
	
	while(str[i] != '\0'){
		sum += str[i] - '0';
		i++;
	}

	t = sum;
	while(t > 9){
		t /= 10;
		mask *= 10;
	}
	
	while(mask > 0){
		x = sum / mask;
	    sum %= mask;
	    mask /= 10;
	
		switch(x){
			case 0: printf("ling"); break;
			case 1: printf("yi"); break;
			case 2: printf("er"); break;
			case 3: printf("san"); break;
			case 4: printf("si"); break;
			case 5: printf("wu"); break;
			case 6: printf("liu"); break;
			case 7: printf("qi"); break;
			case 8: printf("ba"); break;
			case 9: printf("jiu"); break;
		}
		if(mask > 0){
			printf(" ");
		}
	}
	
	return 0;
} 
