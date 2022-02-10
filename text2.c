#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int new1(int x,int y)
{
	int i=0;
	i=x+y;
	return i;
}
int main()
{
	int num1=0;
	int num2=0;
	int effort=0;
	printf("请输入想要相加的两个数字：");
	scanf("%d%d",&num1,&num2);
	effort=new1(num1,num2);
	printf("%d+%d=%d",num1,num2,effort);
}