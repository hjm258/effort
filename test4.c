#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//位运算符
int main()
{
	//按位与
	int num1=3;
	int num2=5;
	int result=0;
	result = num1&num2;
	printf("%d\n",result);
	//按位或
	result = num1|num2;
	printf("%d\n",result);
	//按位异或
	result = num1^num2;
	printf("%d\n",result);
	//逻辑反运算
	result=!num1;
	printf("%d\n",result);
	//按位取反
	result=~num1;
	printf("%d",result);

}

////比较两个数的大小
//int main()
//{
//	int num1=0;
//	int num2=0;
//	int max=0;
//	printf("请输入要比较大小的两个数>:");
//	scanf("%d%d",&num1,&num2);
//	max=num1>num2?num1:num2;
//	printf("最大值为：%d",max);
//	return 0;
//}