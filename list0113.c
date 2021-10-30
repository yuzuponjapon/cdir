#include<stdio.h>
int main(void)
{
	int n1,n2;
	puts("２つの整数を入力してください。");
	printf("NO1 >");	scanf("%d",&n1);
	printf("NO2 >");	scanf("%d",&n2);

	printf("それらの和は%dです。\n",n1 + n2);

	return 0;
}
	
