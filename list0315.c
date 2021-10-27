#include<stdio.h>
int main(void)
{
	int no1,no2,max;

	printf(" no1 =");	scanf("%d",&no1);
	printf(" no2 =");	scanf("%d",&no2);

	printf("最大は%dです。\n",(no1 > no2) ? no1 : no2 );

	return 0;
}
