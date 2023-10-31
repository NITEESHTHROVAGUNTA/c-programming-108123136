#include<stdio.h>
int main()
{ int i,j,t,n;
	printf("enter the size of the arrray\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n;i=i+2)
	{
		t=arr[i+1];
		arr[i+1]=arr[i];
		arr[i]=t;}

	
		for(i=0;i<n;i++)
		printf("%d",arr[i]);
return 0;
}
