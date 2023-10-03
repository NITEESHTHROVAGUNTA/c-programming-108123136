#include<stdio.h>
int main ()
{
	int i,s,j;
	for(i=1;i<=5;i++)
	{	for(s=1;s<=i;s++)
	printf(" ");
	for(j=1;j<=5 ;j++)
	printf("* ");
	printf("\n");
	}
	return 0;
}
