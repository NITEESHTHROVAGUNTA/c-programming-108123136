#include<stdio.h>
#include<math.h>
int main ( )
{
int a,b;
scanf("%d%d",&a,&b);
printf("befor swaping the value of a = %d and value of b = %d\n",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("THE SWAPED VALUES OF a is %d AND b is %d ",a,b);
return 0;
}