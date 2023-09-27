#include<stdio.h>
#include<math.h>
int main()
{
	int rev,rem,n;
	printf("Enter a Integer : ");
	scanf("%d",&n);
	while(n>0){
	rem =n%10;
	rev=rev*10+rem;
	n/=10;}
	printf("the reverse of integer is %d",rev);
}
