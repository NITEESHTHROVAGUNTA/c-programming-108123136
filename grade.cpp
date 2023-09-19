#include<stdio.h>
#include<math.h>
int main()
{
	float m,p,c,b,com,t;
	printf("enter your marks in order of ,math,phy,chem,bio,comp");
	scanf("%f%f%f%f%f",&m,&p,&c,&b,&com);
	t=(m+p+c+b+com)/5;
	printf("you scored %f ",t);
	if(t>=90)
	printf("your GRADE is A ");
	else if (t>=80)
	printf("your GRADE is B");
	else if (t>=70)
    printf("your GRADE is C");
	else if (t>=60)
	printf("your GRADE is D");
	else if (t>=40)
	printf("your GRADE is E");
	else 
	printf("your GRADE is F" );


	return 0;
}

