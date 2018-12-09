#include<stdio.h>

int main (void){
	int num[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int sum, year, month, day, i;
	
	while(scanf("%d/%d/%d", &year, &month, &day) != EOF){
		sum = 0;
		
		for(i = 0; i < month - 1; i++){
			sum += num[i];
		}
		if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
			sum += 1;
		}
		printf("%d\n", sum + day);
	}
	
}
