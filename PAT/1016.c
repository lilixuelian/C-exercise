#include<stdio.h>

int sum(int da, int a_num){
	int sum = 0, i;
	for(i = 1; i <= a_num; i++){
		sum = sum*10 + da;
	}
	return sum;
}

int main (void){
	int a, da, b, db, a_num[10] = {0}, b_num[10] = {0};
	
	scanf("%d %d %d %d", &a, &da, &b, &db);
	
	while(a > 0){
		a_num[a % 10]++;
		a /= 10;
	}
	while(b > 0){
		b_num[b % 10]++;
		b /= 10;
	}
	
	printf("%d", sum(da, a_num[da]) + sum(db, b_num[db]));
} 
