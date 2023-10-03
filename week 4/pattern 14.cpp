#include<stdio.h>
int main ()
{
	int i,s,j;
	for(i=1;i<=5;i++)
	{for(j=1;j<=i;j++)
	printf("* ");
	for(s=1;s<=20-4*i;s++)
	printf(" ");
	for(j=1;j<=i ;j++)
	printf("* ");
	printf("\n");
	}
	for(i=1;i<=5;i++)
	{
	for(j=0;j<=5-i;j++)
	printf("* ");
	for(s=1;s<=4*i-4;s++)
	printf(" ");
	for(j=0;j<=5-i ;j++)
	printf("* ");
	printf("\n");
	}
	return 0;
}
