/*
   ��if�жϣ���������ʵ�����ж������������״����Ϊ�������������1��λ���������������2��Ϊ���������������3�����ܹ��������������0. 
*/

#include<stdio.h>

int main (void)

{
	int a, b, c;
	
	puts("����������ʵ����");
	printf("ʵ��1��",a);
	scanf("%d",&a);
	printf("ʵ��2��",b);
	scanf("%d",&b);
	printf("ʵ��3��",c);
	scanf("%d",&c);
	
	if(a+b<c || a+c<b|| b+c<a)
	puts("0");
	else if( a==b && a==c)
	puts("1");
	else if ( a==b || a==c || b==c)
    puts("2");
	else if ( (a + b) > c || (a + c) > b || (b + c) > a)
	puts("3");
	else
	puts("0");
		
	return 0;
 } 
