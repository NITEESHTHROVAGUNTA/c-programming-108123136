#include<stdio.h> 
int main()
{	int n,i,j,t,k;
 printf("enter the size of the arrray\n");
	scanf("%d",&n);
	printf("enter k\n");
	scanf("%d",&k);
	int arr[n];
	printf("enter the elements of arrary\n");
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
	}}
	printf("the kth samllest and largest terms %d %d",arr[k-1],arr[n-k]);
		
return 0;
}
