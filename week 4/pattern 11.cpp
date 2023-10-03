#include<stdio.h>
int main ()
{
	int i,s,j;
	for(i=1;i<=5;i++)
	{for(s=1;s<=i-1;s++)
	printf("  ");
	for(j=0;j<=5-i ;j++)
	printf("* ");
	printf("\n");
	}
	for(i=1;i<=5;i++)
	{for(s=1;s<=5-i;s++)
	printf("  ");
	for(j=1;j<=i ;j++)
	printf("* ");
	printf("\n");
	}
	return 0;
}
