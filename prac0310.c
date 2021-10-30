#include<stdio.h>
int main(void)
{
	int no1,no2,no3;

	printf("no1 = ");	scanf("%d",&no1);
	printf("no2 = ");	scanf("%d",&no2);
	printf("no3 = ");	scanf("%d",&no3);

	if ( no1 == no2 && no1 == no3 )
		puts ("3onaji");
	else
		if ( no1 == no2 || no1 == no2 || no2 == no3 )
			puts ("2onaji");
		else
			puts ("0onaji");

	return 0;
}
			
