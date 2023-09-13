#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,n;
printf("enter your principal");
scanf("%f",&a);
printf("enter your rate of interest ");
scanf("%f",&b);
printf("enter your time period  ");
scanf("%f",&c);
d=(a*b*c)/100;
printf("the simple intrest in given time interval is %f\n",d);
n=a*pow(1+b/100,c)-a;
printf("the compound interest is   %f\n",n);
return 0;
}
