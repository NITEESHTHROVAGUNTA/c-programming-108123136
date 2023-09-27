#include<math.h>
#include<stdio.h>
int main()
{
	int s,n,a=0;
	printf(" enter a integer");
	scanf("%d",&n);
	for(s=n;s!=0;a++)
	{
		s=s/10;
	}
	printf("the length of %d is  %d",n,a);
	return 0;
}
