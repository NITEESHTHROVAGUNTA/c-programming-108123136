#include<stdio.h>
int main ()
{
	int i,j,t;
	char str[100],copy[100];
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++){}

for(j=0;j<=i/2;j++){
t=	str[j];
	str[j]=str[i-j-1];
	str[i-j-1]=t;
}
printf("%s",str);
return 0;
}
