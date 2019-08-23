#include<stdio.h>
#include<stdlib.h>

int L, H;		// 录取最低分数线和优先录取线

typedef struct Student {
	int id;				// 准考证号
	short de, cai, all;	// 德分，才分，总分
	char level;			// 等级，A圣人，B君子，C愚人，D小人，E淘汰
}Stu;	// 考生
Stu stu[100001];		// 考生

char getLevel(short de, short cai) {
	if (de >= H) {
		if (cai >= H) {
			return 'A';			// 圣人
		}
		else if (cai >= L) {
			return 'B';			// 君子
		}
		else {
			return 'E';			// 淘汰
		}
	}
	else if (de >= L) {
		if (cai >= H) {
			return 'D';			// 小人
		}
		else if (cai >= L) {
			if (de >= cai) {
				return 'C';		// 愚人
			}
			else {
				return 'D';		// 小人
			}
		}
		else {
			return 'E';			// 淘汰
		}
	}
	else {
		return 'E';				// 淘汰
	}
}

int compare(const Stu* stu1, const Stu* stu2) {
	if (stu1->level != stu2->level) {		// 等级不同
		return stu1->level - stu2->level;	// 按照等级升序排列
	}
	if (stu1->all != stu2->all) {		// 等级相同，总分不同
		return stu2->all - stu1->all;	// 按照总分降序排列
	}
	if (stu1->de != stu2->de) {		// 等级和总分都相同，德分不同
		return stu2->de - stu1->de;	// 按照德分降序排列
	}
	return stu1->id - stu2->id;	// 若等级，总分，德分都相同，按照准考证号升序排列
}

int main() {
	int N, enter;	// enter录取的人数
	scanf("%d%d%d", &N, &L, &H);	// 输入人数，最低录取分数线和优先录取线
	enter = N;		// 初始全部录取
	for (int i = 0; i < N; i++) {
		scanf("%d%d%d", &stu[i].id, &stu[i].de, &stu[i].cai);	// 考生信息
		stu[i].all = stu[i].de + stu[i].cai;	// 计算总分
		stu[i].level = getLevel(stu[i].de, stu[i].cai);	// 分级
		if ('E' == stu[i].level) {
			enter--;	// 若考生被淘汰，录取人数减1
		}
	}
	qsort(stu, N, sizeof(Stu), compare);	// 排序，头文件stdlib.h
	printf("%d\n", enter);
	for (int i = 0; i < enter; i++) {
		printf("%d %d %d\n", stu[i].id, stu[i].de, stu[i].cai);
	}
}
