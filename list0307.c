#include<stdio.h>
int main(void)
{
	int no1,no2;

	printf("no1 >");	scanf("%d",&no1);
	printf("no2 >");	scanf("%d",&no2);

	if ( no1 != no2 )
		puts("違います");
	else
		puts("同じです");

	return 0;
}
