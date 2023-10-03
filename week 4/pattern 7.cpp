#include<stdio.h>
int main ()
{
	int i,s,j;
	for(i=1;i<=5;i++)
	{for(s=1;s<=2*i-2;s++)
	printf(" ");
	for(j=0;j<=5-i ;j++)
	printf("* ");
	printf("\n");
	}
	return 0;
}
