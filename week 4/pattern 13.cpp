#include<stdio.h>
int main ()
{
	int i,s,j;
	for(i=1;i<=5;i++)
	{for(s=1;s<=5-i;s++)
	printf("  ");
	for(j=1;j<=2*i-1 ;j++)
	printf("* ");
	printf("\n");
	}
	for(i=1;i<=4;i++)
	{for(s=1;s<=i;s++)
	printf("  ");
	for(j=1;j<=9-2*i ;j++)
	printf("* ");
	printf("\n");
	}
	return 0;
}
