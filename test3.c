#define _CRT_SECURE_NO_WARNINGS 1
/比较两个数的大小
#include<stdio.h>
int Max(int x,int y)
{
	if (x>y)
	{
		return x;	
	}
	else
	{
		return y;
	}

}
int main()
{
	int num1=0;
	int num2=0;
	int max=0;
	printf("请输入需要比较大小的两个数>:");
	scanf("%d%d",&num1,&num2);
	max=Max(num1,num2);
	printf("最大值为:%d",max);
	return 0; 
}