#include<stdio.h>
#include<stdlib.h>

int L, H;		// ¼ȡ��ͷ����ߺ�����¼ȡ��

typedef struct Student {
	int id;				// ׼��֤��
	short de, cai, all;	// �·֣��ŷ֣��ܷ�
	char level;			// �ȼ���Aʥ�ˣ�B���ӣ�C���ˣ�DС�ˣ�E��̭
}Stu;	// ����
Stu stu[100001];		// ����

char getLevel(short de, short cai) {
	if (de >= H) {
		if (cai >= H) {
			return 'A';			// ʥ��
		}
		else if (cai >= L) {
			return 'B';			// ����
		}
		else {
			return 'E';			// ��̭
		}
	}
	else if (de >= L) {
		if (cai >= H) {
			return 'D';			// С��
		}
		else if (cai >= L) {
			if (de >= cai) {
				return 'C';		// ����
			}
			else {
				return 'D';		// С��
			}
		}
		else {
			return 'E';			// ��̭
		}
	}
	else {
		return 'E';				// ��̭
	}
}

int compare(const Stu* stu1, const Stu* stu2) {
	if (stu1->level != stu2->level) {		// �ȼ���ͬ
		return stu1->level - stu2->level;	// ���յȼ���������
	}
	if (stu1->all != stu2->all) {		// �ȼ���ͬ���ֲܷ�ͬ
		return stu2->all - stu1->all;	// �����ֽܷ�������
	}
	if (stu1->de != stu2->de) {		// �ȼ����ֶܷ���ͬ���·ֲ�ͬ
		return stu2->de - stu1->de;	// ���յ·ֽ�������
	}
	return stu1->id - stu2->id;	// ���ȼ����ܷ֣��·ֶ���ͬ������׼��֤����������
}

int main() {
	int N, enter;	// enter¼ȡ������
	scanf("%d%d%d", &N, &L, &H);	// �������������¼ȡ�����ߺ�����¼ȡ��
	enter = N;		// ��ʼȫ��¼ȡ
	for (int i = 0; i < N; i++) {
		scanf("%d%d%d", &stu[i].id, &stu[i].de, &stu[i].cai);	// ������Ϣ
		stu[i].all = stu[i].de + stu[i].cai;	// �����ܷ�
		stu[i].level = getLevel(stu[i].de, stu[i].cai);	// �ּ�
		if ('E' == stu[i].level) {
			enter--;	// ����������̭��¼ȡ������1
		}
	}
	qsort(stu, N, sizeof(Stu), compare);	// ����ͷ�ļ�stdlib.h
	printf("%d\n", enter);
	for (int i = 0; i < enter; i++) {
		printf("%d %d %d\n", stu[i].id, stu[i].de, stu[i].cai);
	}
}
