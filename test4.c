#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//λ�����
int main()
{
	//��λ��
	int num1=3;
	int num2=5;
	int result=0;
	result = num1&num2;
	printf("%d\n",result);
	//��λ��
	result = num1|num2;
	printf("%d\n",result);
	//��λ���
	result = num1^num2;
	printf("%d\n",result);
	//�߼�������
	result=!num1;
	printf("%d\n",result);
	//��λȡ��
	result=~num1;
	printf("%d",result);

}

////�Ƚ��������Ĵ�С
//int main()
//{
//	int num1=0;
//	int num2=0;
//	int max=0;
//	printf("������Ҫ�Ƚϴ�С��������>:");
//	scanf("%d%d",&num1,&num2);
//	max=num1>num2?num1:num2;
//	printf("���ֵΪ��%d",max);
//	return 0;
//}