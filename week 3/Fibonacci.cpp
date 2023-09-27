#include<math.h>
#include<stdio.h>
int main()
{
	int i,n,a=0,b=1,s;
	printf("enter the number :")
	scanf("%d",&n);
	if(n==1||n==0)
{
		printf("the %d",n);
		}
	else
	{
	for(i=1;i<n;i++)
{	s=a+b;	a=b;	b=s;}
	printf("the %dth  term of fibonacci series is %d",n,s);
    }
    return 0;
}

