#include<stdio.h>
//这一版比上一版改进的地方在于，把分数储存起来做一个数组，这样的话只要输入一个数字就可以存放到相应的数组里面。 
//一定要注意，分数的这个数组声明时要声明101，而不是100，别忘了还有一个0 
int main (void){
	
	int n1, n2, i, j;
	int score, num[101] = {0}, tag;
	
	scanf("%d", &n1);
	for(i = 0; i < n1; i++){
		scanf("%d", &score);
		num[score]++;
	}
	scanf("%d", &n2);
	for(i = 0; i < n2; i++){
		scanf("%d", &tag);
		printf("%d", num[tag]);
		if(i < n2 - 1){
			printf(" ");
		}
	}
	
	return 0;
}
