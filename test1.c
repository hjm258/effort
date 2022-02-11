#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//各种数据类型的空间大小
int main()
{
	printf("char=%d\n",sizeof(char));
	printf("short=%d\n",sizeof(short));
	printf("int=%d\n",sizeof(int));
	printf("long=%d\n",sizeof(long));
	printf("long long=%d\n",sizeof(long long));
	printf("float=%d\n",sizeof(float));
	printf("double=%d\n",sizeof(double));
	return 0;
}