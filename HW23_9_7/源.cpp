#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main(void)
{
	float a = 2.555;
	printf("%5.3f\n", a);//%����С����ǰָ�����������ָ������
	int c, d;
	printf("Please enter c d\n");
	scanf("%d %d", &c, &d);//������Ӹ�ʽ��"%d, %d"���û���Ҫ����,����Ϊ��� ��дΪ"c=%d, d=%d"�û���Ҫ�������%֮�������
	printf("c = %d, d = %d\n", c, d);//scanf����ָ��λ����ָ������ %*2dָ������λ

}
