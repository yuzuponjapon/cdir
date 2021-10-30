#include<stdio.h>
int main(void)
{
	double a = 50;
	double b = 100;

	printf("int ----- %d\n",((int)(a / b)) * 100);
	printf("int2 ---- %d\n",(int)((a / b) * 100));
	printf("double -- %f\n",(a / b) * 100);
	printf("double -- %d\n",(a / b) * 100);

	return 0;
}
