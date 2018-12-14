#include<stdio.h>
#include<string.h>

int main (void){
	
	int n;
	int a, b, c, d, i, j, len;
	char str[50];
	
	scanf("%d", &n);
	
	
	while(n--){
		for(i = 0; i < n; i++){
			a = b = c = d = 0;
			
			
			scanf("%s", str);
			
			len = strlen(str);
			
			if(len >= 8 && len <= 16){
				
				for(j = 0; j < len; j++){
				if('A' <= str[j] && str[j] <= 'Z'){
					a = 1;
				}
				else if('a' <= str[j] && str[j] <= 'z'){
					b = 1;
				}
				else if('0' <= str[j] && str[j] <= '9'){
					c = 1;
				}
				else if(str[j] == '~' || str[j] == '@' || str[j] == '%' || str[j] == '!'){
					d = 1;
				}
			    }
			
			    int count = a + b + c + d;
			
			    if(count >= 3){
				
				    printf("YES\n");
			    }
			    else{
				
			     	printf("NO\n");
		        }
		        break;
				
			}
			
				
				printf("NO\n");
			
			
		}	
	}
	
	return 0;
} 
