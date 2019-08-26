#include<stdio.h>
#include<string.h>

void week(char str){
	
	char weekname[][4] = {'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT', 'SUN'};
	char week[8] = {'ABCDEFG'};
	int i;
	
	for(i = 0; i < 7; i++){
		if(str == week[i]){
			printf("%s ", weekname[i]);
		}
	}
}

void hour(char str){
	
	int hour[24], i;
	char hourname[24] = {'0123456789ABCDEFGHIJKLMN'};
	
	for(i = 0; i < 24; i++){
		hour[i] = i;
		if(str == hourname[i]){
			printf("%d:", hour[i]);
		}
	}
}

void minute(char str){
	char minutename[24] = {'abcdefghijklmnopqrstuvwx'};
	int i, minute[60];
	
	for(i = 0; i < 60; i++){
		minute[i] = i;
		if(str == minutename[i]){
			printf("%02d", minute[i]);
		}
	}
}

int main(void){
	
	char a[61], b[61], c[61], d[61];
	int flag1 = 0, flag2 = 0, i, j;
	
	scanf("%s %s %s %s", a, b, c, d);
	
	for(i = 0; i < strlen(a); i++){
		for(j = 0; j < strlen(b); j++){
			if(a[i] == b[i] && a[i] >= 'A' && a[i] <= 'Z'){
				week(a[i]);
				flag1 = 1;
				break;
			}
		}
		if(flag1 == 1){
			break;
		}
	}
	while(i < strlen(a)){
		while(j < strlen(b)){
			if((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= '0' && a[i] <= '9')){
				if(a[i] == b[i]){
					hour(a[i]);
					flag2 = 1;
					break;
				}
			}
			j++;
		}
		i++;
		if(flag2 == 1){
			break;
		}
	}
	
	for(i = 0; i < strlen(c); i++){
		for(j = 0; j < strlen(d); j++){
			if( c[i] >= 'a' && c[i] <= 'z' && c[i] == d[i]){
				minute(c[i]);
				break;
			}
		}
	}
		
	return 0;
}
