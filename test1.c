#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>
int add(int a,int b)
{
	int z=0;
	z=a+b;
	return z;
}
int main()
{
	int x=0;
	int y=0;
	int i=0;
	printf("������Ҫ��ӵ�������");
	scanf("%d%d",&x,&y);
	i=add(x,y);
	printf("%d+%d=%d\n",x,y,i);
}

//int main()
//{
//	int king=0;
//	printf("׼���ú�ѧϰ��������\n");
//	while(king<100000)
//	{
//		king++;
//	printf("����%d������\n",king);
//	};
//	printf("�ɹ��ϰ�������\n");
//	/*char arr[]="abc";
//	char arr1[]={'a','b','c',97,97,97,97,97,97};
//	printf("%s\n",arr);
//	printf("%s\n",arr1);
//	printf("%d\n",strlen(arr));
//	printf("%d\n",strlen(arr1));*/
//
//}



//#include <stdio.h>
//enum New
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	enum New a=MALE;
//	printf("%D\n",MALE);
	//int num1=0;
	//int num2=0;
	//int sum=0;
	//scanf("%d%d",&num1,&num2);
	//sum=num1+num2;
	//printf("sum=%d\n",sum);
	//return 0;

//}
