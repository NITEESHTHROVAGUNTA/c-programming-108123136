#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,d,e,n;
printf("enter your principal");
scanf("%f",&a);
printf("enter your rate of interest ");
scanf("%f",&b);
printf("enter your time period  ");
scanf("%f",&c);
d=(a*b*c)/100;
printf("the simple intrest in given time interval is %f\n",d);
printf("ENTER THE NUMBER OF TIMES INTEREST APPLIED ");
scanf("%f",&e);
n=a*pow((1+(b/e)),(e*c));
printf("the compound interest is   %f\n",n);
return 0;
}
