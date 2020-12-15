#include<stdio.h>
#define MAX 9

int main(void)
{
	pritnf("=== 구구단 출력 ===\n");
	for (int i = 2; i <= MAX; i++)
	{
		printf("%6단 출력\n", i);
	}

	return 0;
}