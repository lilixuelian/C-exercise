#include<stdio.h>

int str_dcount(const char a[], int n){
	int i = 0;
	int cnt = 0;
	
	while(a[i]){
		if(a[i] == 'n'){
			cnt++;
		}
	}
	return cnt;
}

int sum(int cnt, int n){
	int sum = n;
	while(--cnt){
		sum *= 10;
		sum += n;
	}
	return sum;
}

int main (void){
	
	int n1, n2, cnt1, cnt2;
	char a[100000000], b[1000000000];
	
	scanf("%s %d %s %d", a, &n1, b, &n2);
	
	cnt1 = str_count(a, n1);
	cnt2 = str_count(b, n2);
	
	printf("%d", sum(cnt1, n1) + sum(cnt2, n2));
	
	return 0;
}
