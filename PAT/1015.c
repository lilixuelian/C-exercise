#include<stdio.h>

//这种写法非常蠢：
//1、分别四类人都建立四个二维数组
//2、交换的时候还要把三个内容（学号、德分、才分）都要交换
//3、答案还错了一部分。。。提交不通过
//
//这是一个典型的用结构体来写的题啊！！！ 

void print (int a[][8],int m){
	int i, j, temp;
	for(i = 0; i < m - 1; i++){
		for(j = 0; j < m - 1 - i; j++){
			if(a[m + 1][3] > a[m][3]){
				temp = a[m][0];
				a[m][0] = a[m+1][0];
				a[m+1][0] = temp;
				temp = a[m][1];
				a[m][1] = a[m+1][1];
				a[m+1][1] = temp;
				temp = a[m][2];
				a[m][2] = a[m+1][2];
				a[m+1][2] = temp;
			}
		}
	}
	for(i = 0; i < m; i++){
		printf("%d %d %d\n", a[m][0], a[m][1], a[m][2]);
	}
}


int main (void){
	
	int sum, l, h, cnt = 0, a[100000][4], b[100000][4], c[100000][4], d[100000][4], num, mor, tal;
	int m = 0, n = 0, p = 0, q = 0, i;
	
	scanf("%d %d %d", &sum, &l, &h);
	
	for(i = 0; i < sum; i++){
		scanf("%d %d %d", &num, &mor, &tal);
		if(mor >= l && tal >= l){
			cnt++;
			if(mor >= h){
				if(tal >= h){
					a[m][0] = num;
					a[m][1] = mor;
					a[m][2] = tal;
					a[m][3] = mor + tal;
					m++;
				}
				else{
					b[n][0] = num;
					b[n][1] = mor;
					b[n][2] = tal;
					b[n][3] = mor + tal;
					n++;
				}
			}
			else{
				if(mor >= tal){
					c[p][0] = num;
					c[p][1] = mor;
					c[p][2] = tal;
					c[p][3] = mor + tal;
					p++;
				}
				else{
					d[q][0] = num;
					d[q][1] = mor;
					d[q][2] = tal;
					d[q][3] = mor + tal;
					q++;
				}
			}
		}
	}
	
	printf("%d\n", cnt);
	print(a, m);
	print(b, n);
	print(c, p);
	print(d, q); 
	
	return 0;
}
