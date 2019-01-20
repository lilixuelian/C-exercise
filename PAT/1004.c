#include<stdio.h>

int main (void){
	
	int n, i;
	char name[100][11], number[100][11];
	int score[100];
	int max = 0, min = 100, tempmax = 0, tempmin = 0;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%s %s %d", name[i], number[i], &score[i]);
		
		if(score[i] > max){
			max = score[i];
			tempmax = i;
		}
		if(score[i] < min){
			min = score[i];
			tempmin = i;
		}
	}
	
	printf("%s %s", name[tempmax], number[tempmax]);
	printf("\n");
	printf("%s %s", name[tempmin], number[tempmin]);
	
	return 0;
}
