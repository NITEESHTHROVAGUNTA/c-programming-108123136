#include<math.h>
#include<stdio.h>
int main()
{
	int i,n;
	printf("chose your upper bound ");
	scanf("%d",&n);
	for(i=1;i==n;i++)
	{
		if(i%2==0)
		printf("%d,",i);
	}
	return 0;
}

