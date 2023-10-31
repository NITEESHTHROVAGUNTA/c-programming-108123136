#include<stdio.h> 
int main()
{	int n,i,j,t;
 printf("enter the size of the arrray\n");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(j=0;j<n;j++)
	{
	for(i=0;i<n-1;i++)
	{
		if(arr[i+1]<arr[i]){
		t=arr[i+1];
		arr[i+1]=arr[i];
		arr[i]=t;}
	}
	}
		for(i=0;i<n;i++){
		if(arr[i] ==arr[i+1]){
printf("%d ",arr[i]);}
while(arr[i]==arr[i+1]&&i<n)
{++i;}
}
return 0;
}

