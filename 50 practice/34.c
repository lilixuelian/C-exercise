#include<stdio.h>

int main (void){
	
	int x = 0;
	int y = 0;
	int i, j, n;
	int a[100][4];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		for(j = 0; j < 4; j++){
			scanf("%d", &a[i][j]);
		}
		
		if((a[i][1] == a[i][0] + a[i][2]) && (a[i][3] != a[i][0] + a[i][2])){
			y++;
		}
		else if((a[i][1] != a[i][0] + a[i][2]) && (a[i][3] == a[i][0] + a[i][2])){
			x++;
		}
	}
	
	printf("%d %d", x, y);
	
	return 0;
} 
