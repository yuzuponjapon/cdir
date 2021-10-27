#include<stdio.h>
int main(void)
{
	int month;

	printf("月を入力してください。＞");
	scanf("%d",&month);

	if ( month == 3 || month == 4 || month == 5  )	printf("%d月は春です。\n",month);
	if ( month == 6 || month == 7 || month == 8 )	printf("%d月は夏です。\n",month);
	if ( month == 9 || month == 10 || month == 11 )	printf("%d月は秋です。\n",month);
	if ( month == 12 || month == 1 || month == 2 ) 	printf("%d月は冬です。\n",month);

	return 0;
}
