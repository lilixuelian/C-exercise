#include <stdio.h>

int main (void){
	
	int m, n, t;
	
	scanf("%d %d", &m, &n);
	
	if(m < n){
		int temp = n;
    	n = m;
    	m = temp;
	}
	
	do{
		t = m % n;
		m = n;
		n = t;
	}while(t != 0);
	
	printf("%d", m);
	
	return 0;
}
