#include<stdio.h>

int main (void){
	
	float money, x, y;
	int type, quality, a[1000], b[1000], i, j, sum, temp;
	
	scanf("%d %d", &type, &quality);
	
	for(i = 0; i < type; i++){
		scanf("%d", &a[i]);
	}
	for(i = 0; i < type; i++){
		scanf("%d", &b[i]);
	}
	
	for(i = 0; i < type - 1; i++){
		for(j = 0; j < i - type - 1; j++){
			x = b[j] / a[j];
			y = b[j + 1] / a[j + 1];
			printf("j = %d, x = %d, y = %d\n", j, x, y);
			if(a[j] < b[j]){
				temp = b[j];
				b[j] = b[j + 1];
				b[j + 1] = temp;
//				temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
			}
		}
	}
	
	printf("%d %d %d\n", a[0], a[1], a[2]);
	printf("%d %d %d\n", b[0], b[1], b[2]);

	sum = a[0];
;	while(1){
		if(quality > sum){
			sum += a[i + 1];
			money += a[i] * b[i];
		}
		else{
			money += (quality - sum) * b[i];
		}
	}
	
	printf("%0.2f", money);
	return 0;
}
