#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c;
	printf("enter the values to be compared\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a==b&&b==c&&c==a)
	printf("the given values are EQUAL");
	else
	printf("THEY ARE NOT EQUAL");

	return 0;
}

