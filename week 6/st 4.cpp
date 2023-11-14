#include<stdio.h>
int main ()
{
	int i;
	char str[100];
	scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++){
	if (str[i]==' '){
	}	
	else
	{str[i]=str[i]+32;
	}}
printf("%s",str);
return 0;
}
