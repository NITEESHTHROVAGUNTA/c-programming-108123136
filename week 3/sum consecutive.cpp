#include<math.h>
#include<stdio.h>
int main()
{
	int s,n,a;
	a=1;
	printf(" enter a integer");
	scanf("%d",&n);
	for(s=1;s<=n;s++)
	{
		a+=s;
	}
	printf("the product of natural numbers till the given integer is %d",a);
	return 0;
}


