#include<stdio.h>
int main (void){
	
	int n, x, m, t1, t2;
	int sum = 0;
	int mask = 1;
	
	scanf("%d", &n);
	
	t1 = n;
	do{
		x = t1 % 10;
		t1 /= 10;
		sum += x;
	}while(x > 0);
	
	t2 = sum;
	while( t2 > 9){
		t2 /= 10;
		mask *= 10;
	}
	
	while(mask > 0){
		m = sum / mask;
		sum %= mask;
		mask /= 10;
		
		switch(m / 1){
			case 0 : printf("ling");  break;
			case 1 : printf("yi");   break;
			case 2 : printf("er");   break;
			case 3 : printf("san");   break;
			case 4 : printf("si");   break;
			case 5 : printf("wu");   break;
			case 6 : printf("liu");   break;
			case 7 : printf("qi");   break;
			case 8 : printf("ba");   break;
			case 9 : printf("jiu");   break;
    	}
		
		if(mask > 0){
			printf(" ");
		}
	}
	
	
	
	return 0;
}
