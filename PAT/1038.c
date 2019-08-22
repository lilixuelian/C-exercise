#include<stdio.h>

int main (void){
	
	int n1, n2, i, j;
	int score[100000], tag[100000], num[100000] = {0};
	
	scanf("%d", &n1);
	for(i = 0; i < n1; i++){
		scanf("%d", &score[i]);
	}
	scanf("%d", &n2);
	for(i = 0; i < n2; i++){
		scanf("%d", &tag[i]);
	}
	
	for(i = 0; i < n1; i++){
		for(j = 0; j < n2; j++){
			if(score[i] == tag[j]){
				num[j]++;
				break;
			}
		}
	}
	
	for(j = 0; j < n2 - 1; j++){
		printf("%d ", num[j]);
	}
	printf("%d", num[n2 - 1]);
	
	return 0;
}
