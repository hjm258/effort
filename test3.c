#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 3400
int main()
{
	int i=0;
	int j=0;
	printf("请问你要好好学习了嘛(1,0)>:\n");
	scanf("%d",&i);
	if(i==1)
		{printf("努力背单词吧，3400个基本词汇哦\n");
		while(j<MAX)
			{j++;
			printf("背了%d个单词了\n",j);
			}
		printf("恭喜你，成功上岸！！！\n");
	}
	else
		printf("没有努力哪来的收获，回家种地吧！！！\n");
	return 0;

}