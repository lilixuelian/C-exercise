#include<stdio.h>

int main (void){
	
	int i, n, year, month, day;
	char name[100000][6];
	int yearmin = 1814;
	int monthmin = 9;
	int daymin = 6;
	int yearmax = 2014;
	int monthmax = 9;
	int daymax = 6;
	char min, max;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		scanf("%s", name[i]);
		
		scanf("%d/%d/%d", &year, &month, &day);
		
		if((year < 1814) || ((year = 1814) && (month < 9)) || ((year = 1814) && (month = 9) && (day < 6))){
			n--;
			
			if(year < yearmin){
				min = name[i];
			}
			else if((year = yearmin) && (month < monthmin)){
				min = name[i];
			}
			else if((year = yearmin) && (month = monthmin) && (day < daymin)){
				min = name[i];
			}
			else{
				min = 'nobody';
			}
			
			if(year > yearmax){
				max = name[i];
			}
			else if((year = yearmax) && (month > monthmax)){
				max = name[i];
			}
			else if((year = yearmax) && (month = monthmax) && (day > daymax)){
				max = name[i];
			}
			else{
				max = 'nobody';
			}
		}
		
	}
	
	printf("%d %s %s", n, max, min);
	
	return 0;
}
