#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i;
	char j;
	char str[100];
	printf("enter the letter your searching for ");
	scanf("%c",&j);
	fflush(stdin);
	scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++){
	if (str[i]==j)
	{ printf("%d",i);
	break ;
   	}	
}

return 0;
}
