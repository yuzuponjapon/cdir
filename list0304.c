#include<stdio.h>
int main(void)
{
	int no;

	printf("整数を入力してください。");
	scanf("%d",&no);

	if ( no % 2 )
		puts("奇数です");
	else
		puts("偶数です");

	return 0;
}
