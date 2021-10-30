#include<stdio.h>
int main(void)
{
	int no;

	printf("整数を入力してください。＞");
	scanf("%d",&no);

	if( no % 5 ) 
		puts("５で割り切れません。");

	return 0;
}
