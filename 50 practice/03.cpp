#include<stdio.h>

#define NUMBER 3

void put_chars(int n)
{
	while(n++ > 0)
	putchar(' ');
}

int main (void)
{
	int i, a, j;
	int n = NUMBER;
	
	for(i = 1; i <= n; i++){
		put_chars(n);
		
		for(a = 0; a < (2*n-1); a++){
			printf("*");
		}
		printf("\n");
		  
	}
	
	return 0;
}
