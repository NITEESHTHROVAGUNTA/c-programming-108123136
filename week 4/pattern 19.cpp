#include<stdio.h>
int main()
{
	int i,s,j;
	for(i=3;i<=6;i++)
	{printf("%d",i);
	for(j=3;j<=i;j++)
	printf("*%d",i);
	printf("\n");
	}  
	for(i=3;i<=6;i++)
	{printf("%d",5-i);
	for(j=0;j<=6-i;j++)
	printf("*%d",(9-i));
	printf("\n");
	}
	return 0;
}
