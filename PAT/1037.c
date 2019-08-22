#include<stdio.h>

int main (void){
	
	int pa, pb, pc, aa, ab, ac, p, a, b, c, diff;
	
	scanf("%d.%d.%d %d.%d.%d", &pa, &pb, &pc, &aa, &ab, &ac);
	
	p = pa * 17 * 29 + pb * 29 + pc;
	a = aa * 17 * 29 + ab * 29 + ac;
	
	if(p > a){
		printf("-");
		diff = p - a;
	}
	else{
		diff = a - p;
	}
	
	a = diff / (17 * 29);
	b = (diff - a * 17 * 29) / 29;
	c = diff - a * 17 * 29 - b * 29;
	
	printf("%d.%d.%d", a, b, c);
	
	
	return 0;
}
