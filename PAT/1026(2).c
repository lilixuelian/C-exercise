#include<stdio.h>

int main (void){
	
	int c1, c2, t;
	
	scanf("%d %d", &c1, &c2);
	t = (c2 - c1 + 50) / 100;
	
	printf("%02d:%02d:%02d\n", t/3600, t%3600/60, t%60);
	
	return 0;
}
