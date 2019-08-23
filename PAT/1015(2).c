#include<stdio.h>

typedef struct{
	int number;
	int morality;
	int talent;
	int type;
	int sum;
} Student;

void swap(Student *x, Student *y){
	Student temp = *x;
	*x = *y;
	*y = temp;
}
//
//int classify(Student x, int l, int h){
//	int cnt = 0;
//	
//	if(x.morality >= l && x.talent >= l){
//		cnt++;
//		x.sum = x.morality + x.talent;
//		if(x.morality >= h){
//			if(x.talent >= h){
//				x.type = 1;
//			}
//			else{
//				x.type = 2;
//			}
//		}
//		else{
//			if(x.morality >= x.talent){
//				x.type = 3;
//			}
//			else{
//				x.type = 4;
//			}
//		}
//	}
//	else{
//		x.type = 5;
//		x.sum = 0;
//	}
//	
//	return cnt;
//}

int main (void){
	
	int num = 0, n, l, h, i, j;
	
	Student x[1000];
	scanf("%d %d %d", &n, &l, &h);
	for(i = 0; i < n; i++){
		scanf("%d %d %d", &x[i].number, &x[i].morality, &x[i].talent);
		
		if(x[i].morality >= l && x[i].talent >= l){
			
			num++;
			x[i].sum = x[i].morality + x[i].talent;
			
			if(x[i].morality >= h){
				if(x[i].talent >= h){
					x[i].type = 1;
				}
				else{
					x[i].type = 2;
				}
			}
			else{
				if(x[i].morality >= x[i].talent){
					x[i].type = 3;
				}
				else{
					x[i].type = 4;
				}
			}
		}
		else{
			x[i].type = 5;
			x[i].sum = 0;
		}
	}
	
	for(i = 0; i < num - 1; i++){
		for(j = 0; j < num - 1 - i; j++){
			if(x[j].type > x[j + 1].type){
				swap(&x[j], &x[j + 1]);
			}
			else if(x[j].type == x[j + 1].type && x[j].sum < x[j + 1].sum){
				swap(&x[j], &x[j + 1]);
			}
			else if(x[j].type == x[j + 1].type && x[j].sum == x[j + 1].sum && x[j].morality < x[j + 1].morality){
				swap(&x[j], &x[j + 1]);
			}
			else if(x[j].type == x[j + 1].type && x[j].sum == x[j + 1].sum && x[j].morality == x[j + 1].morality && x[j].number > x[j + 1].number){
				swap(&x[j], &x[j + 1]);
			}
		} 
	}
	
	printf("%d\n", num);
	for(i = 0; i <= num; i++){
		if(x[i].sum > 0){
			printf("%d %d %d\n", x[i].number, x[i].morality, x[i].talent);
		}
	}
	
	return 0;
} 




