#include<stdio.h>
int main(void)
{
	int num;

	printf("整数を入力してください。");
	scanf("%d",&num);

	if ( num % 2 )
		puts("奇数です");

	return 0;
}
