#include<stdio.h>

int main (void){
	
	int n, i, j, k;
	char str[100];
	int cnt[][5] = {0};
	
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%s", str);
		for(j = 0; str[j] != '\0'; j++){
			if(str[j] == 'a')
			cnt[i][0]++;
			else if(str[j] == 'e')
			cnt[i][1]++;
			else if(str[j] == 'i')
			cnt[i][2]++;
			else if(str[j] == 'o')
			cnt[i][3]++;
			else if(str[j] == 'u')
			cnt[i][4]++;
		}
	}
	
	for(k = 0; k < n; k++){
		printf("a:%d\n", cnt[k][0]);
		printf("e:%d\n", cnt[k][1]);
		printf("i:%d\n", cnt[k][2]);
		printf("o:%d\n", cnt[k][3]);
		printf("u:%d\n", cnt[k][4]);
		
		if(k != n)
		printf("\n");
	}
	
	return 0;
}
