#include<stdio.h>

int main (void){
	
	int a, b, c, i = 0, sum, n[32] = {0};
	
	scanf("%d %d %d", &a, &b, &c);
	
	sum = a + b;
	
	while(1){
		n[i] = sum % c;
		if(sum / c == 0){
			break;
		}
		i++;
		sum /= c;
	}
 	while(i >= 0){
 		printf("%d", n[i]);
 		i--;
	}
	
	return 0;
}
