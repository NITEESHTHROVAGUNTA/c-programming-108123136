#include<stdio.h>
#include<math.h>
int main()
{
	int m,y ;
	printf(" enrter the month NUMBER and year \n");
	scanf("%d%d",&m,&y);
	if(m==1)
	printf(" the month has 31 days");
	else if(m==2)
	{
		if( y%4==0&&(y%100!=0||y%400==0))
		printf("it has 29 days ");
		else
		printf("it has 28 days");
	}
	else if (m==3)
	printf("it has 31 days ");
	else if (m==4)
	printf("it has 30 days ");
	else if (m==5)
	printf("it has 31 days ");
	else if (m==6)
	printf("it has 30 days ");
	else if (m==7)
	printf("it has 31 days ");
	else if (m==8)
	printf("it has 31 days ");
	else if (m==9)
	printf("it has 30 days ");
	else if (m==10)
	printf("it has 31 days ");
	else if (m==11)
	printf("it has 30 days ");
	else if (m==12)
	printf("it has 31 days ");
	else
	printf(" enter a valid month");
	return 0;
}

