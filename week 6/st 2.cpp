#include<stdio.h>
int main ()
{
	int i;
	char str[100],copy[100];
	scanf("%[^\n]s",str);
for(i=0;str[i]!='\0';i++){
	copy[i]=str[i];	
}
printf("%s",copy);
return 0;
}
