#include<stdio.h>
#include<math.h>
int main()
{
	int day;
	printf("entert day number");
	scanf("%d",&day);
	switch(day)
	{
		case 1 : printf(" it is MONDAY");
		break;
		case 2 : printf(" it is TUESDAY");

		case 3 : printf(" it is WEDNESDAY");
		break;
		case 4 :  printf(" it is THURSDAY");
		break;
		case 5 : printf(" it is FRIDAY");
		break;
		case 6 : printf(" it is SATURDAY");
		break;
		case 7 : printf(" it is SUNDAY");
		break;
		default : printf(" enter a valid day number");
		
	}
	return 0;
}

