
#include <stdio.h>

int school[100000]={0};//��ĿҪ���������������ڵ�1�� 

int main(){

	int n,id,score;

	scanf("%d",&n);

	

	for(int i=1;i<=n;i++){

		scanf("%d%d",&id,&score);

		school[id]+=score;//��id��ͬ��score�ۼ�����,ͳ���ܳɼ�

	}

	int k=-1,max=-1;

	for(int i=1;i<=n;i++){//����

		if(school[i]>max){//�����Ƚ�

			max=school[i];//�����ֵ����max

			k=i;          //��¼�±�

		}

	}

	printf("%d %d",k,max); 

	return 0;

}

