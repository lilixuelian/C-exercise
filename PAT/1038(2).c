#include<stdio.h>
//��һ�����һ��Ľ��ĵط����ڣ��ѷ�������������һ�����飬�����Ļ�ֻҪ����һ�����־Ϳ��Դ�ŵ���Ӧ���������档 
//һ��Ҫע�⣬�����������������ʱҪ����101��������100�������˻���һ��0 
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
