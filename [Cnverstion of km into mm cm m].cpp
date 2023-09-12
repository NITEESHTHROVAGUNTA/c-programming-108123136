#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d;
printf("enter your distance in kilometer");
scanf("%d",&a);
b=a*1000;
c=b*100;
d=c*10;
printf(" distance in meters is %d\n",b);
printf("distance in centimeter is %d\n",c);
printf("distance in millimeter is %d\n",d);
return 0;
}
