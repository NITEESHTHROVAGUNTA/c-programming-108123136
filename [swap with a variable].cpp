#include<stdio.h>
#include<math.h>
int main ( )
{
int a,b,t;
scanf("%d%d",&a,&b);
printf("befor swaping the value of a = %d and value of b = %d\n",a,b);
t=a;
a=b;
b=t;
printf("THE SWAPED VALUES OF a is %d AND b is %d ",a,b);
return 0;
}