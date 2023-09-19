#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("enter the sides of the triangle ");
	scanf("%f%f%f",&a,&b,&c);
	if(a==b&&b==c&&c==a)
	printf("the triangle is EQULIATERAL");
	else if (a!=b&&a!=c&&b!=c)
	printf("the triangle is SCALENE");
	else
	printf("the triangle is isosceles");
	return 0;
}
