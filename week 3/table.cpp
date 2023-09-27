#include<math.h>
#include<stdio.h>
int main()
{
	int s,n,a;
	printf(" enter a integer");
	scanf("%d",&n);
	for(s=1;s<=10;s++)
	{
		a=n*s;
		printf("%d * %d = %d\n",n,s,a);
	}
	return 0;
}
