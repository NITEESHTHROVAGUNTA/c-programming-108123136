#include<stdio.h>
int main()
{ int i,t,n;
	printf("enter the size of the arrray\n");
	scanf("%d",&n);
	int j=n-1;
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<n/2;i++)
	{
		t=arr[i];
		arr[i]=arr[j];
		arr[j]=t;
		j--;}	
		for(i=0;i<n;i++)
		printf("%d",arr[i]);
return 0;
}
