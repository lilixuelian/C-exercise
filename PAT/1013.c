#include<stdio.h>
#include<math.h>

int is_prime(int i){
	int j, cnt = 1;
	
	for(j = 2; j <= sqrt(i); j++){
		if(i % j == 0){
			cnt = 0;
		}
	}
	return cnt;
}

int main (void){
	
	int i = 0, m, n, num = 1, a[10000], cnt = 0; 
	
	scanf("%d %d", &m, &n);
	
	while(i <= n){
		if(is_prime(num))
			a[i++] = num;
		num++;
	}
	for(i = m; i < n; i++){
		cnt++;
		if(cnt % 10)
			printf("%d ", a[i]);
		else
			printf("%d\n", a[i]);
	}
	
	printf("%d", a[n]);
	
	return 0;
}
