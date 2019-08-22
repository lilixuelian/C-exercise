
#include <stdio.h>

int school[100000]={0};//题目要求把数组的声明放在第1行 

int main(){

	int n,id,score;

	scanf("%d",&n);

	

	for(int i=1;i<=n;i++){

		scanf("%d%d",&id,&score);

		school[id]+=score;//将id相同的score累加起来,统计总成绩

	}

	int k=-1,max=-1;

	for(int i=1;i<=n;i++){//遍历

		if(school[i]>max){//遍历比较

			max=school[i];//将最大值赋给max

			k=i;          //记录下标

		}

	}

	printf("%d %d",k,max); 

	return 0;

}

