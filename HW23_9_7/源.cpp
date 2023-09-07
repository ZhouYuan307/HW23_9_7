#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main(void)
{
	float a = 2.555;
	printf("%5.3f\n", a);//%后面小数点前指定输出域宽，点后指定精度
	int c, d;
	printf("Please enter c d\n");
	scanf("%d %d", &c, &d);//可以添加格式，"%d, %d"则用户需要输入,来作为间隔 或写为"c=%d, d=%d"用户需要输入除了%之外的内容
	printf("c = %d, d = %d\n", c, d);//scanf可以指定位宽不能指定精度 %*2d指跳过两位

}
