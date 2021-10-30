#include<stdio.h>
int main(void)
{
	int no1,no2,no3,max;

	printf("no1 =");	scanf("%d",&no1);
	printf("no2 =");	scanf("%d",&no2);
	printf("no3 =");	scanf("%d",&no3);

	max = no1;

	if( no2 > max )		max = no2;
	if( no3 > max )		max = no3;

	printf("最大値は%dです。\n",max);

	return 0;
}
