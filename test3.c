#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 3400
int main()
{
	int i=0;
	int j=0;
	printf("������Ҫ�ú�ѧϰ����(1,0)>:\n");
	scanf("%d",&i);
	if(i==1)
		{printf("Ŭ�������ʰɣ�3400�������ʻ�Ŷ\n");
		while(j<MAX)
			{j++;
			printf("����%d��������\n",j);
			}
		printf("��ϲ�㣬�ɹ��ϰ�������\n");
	}
	else
		printf("û��Ŭ���������ջ񣬻ؼ��ֵذɣ�����\n");
	return 0;

}