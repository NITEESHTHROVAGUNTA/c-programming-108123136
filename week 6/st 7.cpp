#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i=1,j;
	char str[100],str2[100],con[100];
	scanf("  %[^\n]s ",str);
	fflush(stdin);
	scanf("  %[^\n]s",str2);
    for(j=0;str[j]!='\0';j++){
	if(str[j]!=str2[j])
	{ i=0;
	}
}
if(i==1&&str[j]==str2[j]){
printf(" the strings are equal");}
else
{printf(" the strings are not equal");

}
return 0;
}
