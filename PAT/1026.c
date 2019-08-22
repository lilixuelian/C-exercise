#include<stdio.h>

int main (void){
	
	int before, after, diff, hour, minute, second;
	
	scanf("%d %d", &before, &after);
	
	diff = after - before;
	if(diff % 100 >= 50){
		diff += 100;
	}
	diff /= 100;
	
	hour = diff / 3600;
	minute = (diff - hour * 3600) / 60;
	second = diff - hour * 3600 - minute * 60;
	
	printf("%02d:%02d:%02d", hour, minute, second);
	
	return 0;
}
