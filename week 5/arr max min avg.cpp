#include<stdio.h>
int main()
{int a[5],i,min,max,avg=0;
printf("Enter 5 Integers :");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
	min=max=a[4];
for(i=0;i<5;i++)
{
	if (a[i]<min)
min=a[i];
}
printf("the min value is %d\n",min);
for(i=0;i<5;i++)
{	if (a[i]>max)
max=a[i];}
printf("the max value is %d\n",max);
for(i=0;i<5;i++)
avg=(avg+a[i]);
printf("the avg is %d",avg/5);
return 0;
}
