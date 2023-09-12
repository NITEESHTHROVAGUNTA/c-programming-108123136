#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,d,e,f;
printf("enter the marks of the five subjects");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
f=(a+b+c+d+e)*100/500;
printf("the percentage of you marks  is %d",f);
return 0;
}
