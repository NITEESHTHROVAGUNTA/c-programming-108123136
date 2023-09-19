#include<stdio.h>
#include<math.h>
 main()
{
	float b,r,g,d,h,t;
	printf("enter your basic salary \n ");
	scanf("%f",&b);
	printf("enter your region number ");
	scanf("%f",&r);
	if(r==1)
{
		h=(b*16)/100;
		d=(15*b)/100;t=(10*b)/100;
	g=b+d+h+t;
printf("THE GROSS AMOUNT SALARY IS %f",g);
		}
	else if(r==2)
{
		h=(b*18)/100;
		d=(15*b)/100;t=(10*b)/100;
	g=b+d+h+t;
printf("THE GROSS AMOUNT SALARY IS %f",g);
		}
	else if (r==3)
{
	h=(b*20)/100;
	d=(15*b)/100;t=(10*b)/100;
	g=b+d+h+t;
printf("THE GROSS AMOUNT SALARY IS %f",g);
	}
	else 
	printf("enter a valid region number\n");

	return 0;
}

