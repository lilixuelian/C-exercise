#include<stdio.h>
int main (void){
	char c;
	int n, i;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%d ", &n);
		c = n;
		printf("%c", c);
	}

    return 0;

}
