#include<stdio.h>
#include <string.h>

int main (void){
	
	int n, max = 20140906, min = 18140906, sum, cnt = 0, i, year, month, day;
	char name[6], old_name[6], young_name[6];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%s %d/%d/%d", name, &year, &month, &day);
		
		sum = year * 10000 + month * 100 + day;
		
		if(sum >= 18140906 && sum <= 20140906){
			cnt++; 
			if(sum < max){
				max = sum;
				strcpy(old_name, name);
			}
			if(sum > min){
				min = sum;
				strcpy(young_name, name);
			}
		}
	}
	if(cnt != 0){
		printf("%d %s %s\n", cnt, old_name, young_name);
	}
	else{
		printf("0");
	}
	
	return 0;
}

//
//int year(int a){
//	if(a % 400 == 0 || ( a % 4 == 0 && a % 100 != 0)){
//		return 1;
//	}
//	else return 0;
//}
//
//int date(int a, int b, int c){
//	if(b > 0 && b < 13){
//		if((b == 4 || b == 6 || b == 9 || b == 11) && c <= 30){
//			return 1;
//		}
//		else if((b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) && c <= 31){
//			return 1;
//		}
//		else if(b == 2){
//			if(year(a) && c <= 29){
//				return 1;
//			}
//			else if(!year(a) && c <= 28){
//				return 1;
//			}
//			else{
//				return 0;
//			}
//		}
//		else return 0;
//	}
//	else return 0;
//}
