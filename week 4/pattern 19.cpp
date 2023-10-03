#include<stdio.h>
int main()
{
	int i,s,j;
	for(i=1;i<=4;i++)
	{printf("%d",i);
	for(j=1;j<i;j++)
	printf("*%d",i);
	printf("\n");
	}  
	for(i=1;i<=4;i++)
	{printf("%d",5-i);
	for(j=1;j<=4-i;j++)
	printf("*%d",(5-i));
	printf("\n");
	}
	return 0;
}
