#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a, b, sum, sub, gob;
	float nanum;
	scanf("%d", &a);
	scanf("%d", &b);
	sum = a + b;
	sub = a - b;
	gob = a * b;
	nanum = a / b;
	printf("��:%d ��:%d ��: %d ����: %f", sum,sub,gob,nanum);

}