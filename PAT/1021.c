#include<stdio.h>

int main (void){
	
	int i, a[10] = {0}, j;
	char str[1000];
	
	scanf("%s", str);
	
	for(j = 0; j < sizeof(str); j++){
		i = str[j];
		a[i++];
	}
	
	i = 0;
	if(a[i]){
		printf("%d:%d", i, a[i]);
	}
	
	while(i < 9){
		i++;
		if(a[i]){
			printf("\n%d:%d", i, a[i]);
		}
	}
	
	
	return 0;
}
//
//12345 % 10 = 5-------i
//12345 / 10 = 1234----n
//1234 % 10 = 4
//1234 / 10 = 123
//123 % 10 = 3
//123 / 10 = 12
//12 % 10 = 2
//12 / 10 = 1
//1 % 10 = 1
//1 / 10 = 0------------while(n > 0)

