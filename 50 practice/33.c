#include<stdio.h>
#include<stdlib.h>

void put_char(int n, char a){
	
	while(n-- > 0)
	    putchar(a);
}

void put_block(int n, char a){
	n -= 2;
	while(n-- > 0)
	    putchar(' ');
}

int main (void){
	
	int n, i, n1, n2;
	char a;
	
	scanf("%d ", &n);
	a = getchar();
	
	put_char(n, a);
	printf("\n");
	
	if(n % 2 == 1){
		n1 = n + 1;
		n2 = n;
	}
			
	for( i = 0; i < (n1/2 - 2); i++){
			putchar(a);
			put_block( n2, a);
			putchar(a);
			printf("\n");
		}
	
	put_char( n2, a);
	
	
	
	return 0;
}
