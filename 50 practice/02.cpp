#include<stdio.h>

int main (void)
{
	int a, b;
	
	puts("���������ſεĳɼ���");
	printf("��һ�ſΣ�");
	scanf("%d", &a);
	printf("�ڶ��ſΣ�");
	scanf("%d", &b);
	
	if ( 0 < a && a < 100 && 0 < b && b < 100){
		switch(a > 60 && b > 60 ){
		    case 0: printf("it is not pass.");  break;
		    case 1: printf("it is pass.");      break;	
		}	
	} 
	else
	printf("it is error.");
	
	return 0;
 } 
