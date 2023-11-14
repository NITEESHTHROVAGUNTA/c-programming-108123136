#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i,j;
	char str[100],str2[100],con[100];
	scanf("  %[^\n]s ",str);
	fflush(stdin);
	scanf("  %[^\n]s",str2);

	for(i=0;str[i]!='\0';i++){}

    for(j=0;str2[j]!='\0';j++){
	str[i]=str2[j];	
	i++;
}
printf(" the concated string is %s",str);
return 0;
}
