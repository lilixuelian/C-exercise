#include<stdio.h>

int main (void){
	
	int i, sum, pass, n;
	char str[17];
	int a[] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
	char b[] = { '1','0','X','9','8','7','6','5','4','3','2' };
	
	scanf("%d", &n);
	while(n--){
		scanf("%s", str);
		sum = 0;
		
		for(i = 0; i < 17; i++){
			if(str[i] >= '0' && str[i] <= '9'){
				sum += (str[i] - '0') * a[i];
				
				if(i == 16){
					if(str[17] == b[sum % 11]){
						pass = 0;
					}
					else{
						pass = 1;
						puts(str);
						break;
					}
				}
				
			}
			else{
				pass = 1; 
				puts(str);
				break;
			}
		}
		
	}
	
	if(pass == 0){
		printf("All passed");
	}
	
	return 0;
}
