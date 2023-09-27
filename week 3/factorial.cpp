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
		a*=s;
	}
	printf("%d! = %d",n,a);
	return 0;
}
