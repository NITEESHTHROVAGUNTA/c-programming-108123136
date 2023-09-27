#include<stdio.h>
#include<math.h>
int main ()
{
	int n,rem,sum;
	printf("Enter the Iteger :");
	scanf("%d",&n);
	for(n;n!=0;)
{	rem=n%10;
	sum=sum+rem;
	n=n/10;}
	printf("The Sum of Digits is %d",sum);
	return 0;
	
	
}
