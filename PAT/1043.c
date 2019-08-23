#include<stdio.h>

int main (void){
	
	char ch;
	int a[6] = {0};
	
	while((ch = getchar()) != '\n'){
		if(ch == 'P'){
			a[0]++;
		}
		else if(ch == 'A'){
			a[1]++;
		}
		else if(ch == 'T'){
			a[2]++;
		}
		else if(ch == 'e'){
			a[3]++;
		}
		else if(ch == 's'){
			a[4]++;
		}
		else if(ch == 't'){
			a[5]++;
		}
	}
	while(a[0] > 0 || a[1] > 0 || a[2] > 0 || a[3] > 0 || a[4] > 0 || a[5] > 0){
		if(a[0] > 0){
			printf("P");
			a[0]--;
		}
		if(a[1] > 0){
			printf("A");
			a[1]--;
		}
		if(a[2] > 0){
			printf("T");
			a[2]--;
		}
		if(a[3] > 0){
			printf("e");
			a[3]--;
		}
		if(a[4] > 0){
			printf("s");
			a[4]--;
		}
		if(a[5] > 0){
			printf("t");
			a[5]--;
		}
	}
	
	
	return 0;
}
