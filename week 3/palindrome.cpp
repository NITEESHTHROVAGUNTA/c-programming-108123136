#include<stdio.h>
#include<math.h>
int main()
{
	int rev,rem,n,ori;
	printf("Enter a Integer : ");
	scanf("%d",&n);
	ori=n;
	while(n>0){
	rem =n%10;
	rev=rev*10+rem;
	n/=10;}
	if(ori==rev)
	printf("%d is a Palindrome ",ori);
	else
	printf("%d is not a palindrome",ori);
	return 0;
}

