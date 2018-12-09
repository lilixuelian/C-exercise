#include<stdio.h>

int main (void){
	
	int c1, c2, hh, mm, x, y, s;
	double diff, ss;
	
	scanf("%d %d", &c1, &c2);
	
	diff = (c2 - c1) / 100.00;
	
	hh = diff / 3600;
	mm = (diff - hh * 3600) / 60;
	ss = diff - hh * 3600 - mm * 60.0;
	
	x = ss * 10;
	y = x % 10;
	if(y >= 5){
		s = (x + 10) / 10;
	}
	
	printf("%d:%d:%d", hh, mm, s);
	
	return 0;
}
