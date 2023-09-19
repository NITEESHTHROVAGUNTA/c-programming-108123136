#include<stdio.h>
#include<math.h>
int main()
{
	int u, c;
	printf("enter the number of units consumed ");
	scanf("%d",&u);
	printf("the amount charged per one unit is 10\n");
	c=u*10;
	printf("%d is your electricity bill ",c);
	return 0;
}

