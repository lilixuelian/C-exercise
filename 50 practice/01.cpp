/*
   （if判断）输入三个实数，判断组成三角形形状。若为正三角形则输出1，位等腰三角形则输出2，为任意三角形则输出3，不能构成三角形则输出0. 
*/

#include<stdio.h>

int main (void)

{
	int a, b, c;
	
	puts("请输入三个实数：");
	printf("实数1：",a);
	scanf("%d",&a);
	printf("实数2：",b);
	scanf("%d",&b);
	printf("实数3：",c);
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
