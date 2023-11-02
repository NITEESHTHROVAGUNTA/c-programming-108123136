#include<stdio.h> 
int main()
{	int n,v,i,j,k,t;
 printf("enter the size of the arrray\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements of arrary\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(j=0;j<n;j++)
	{
	for(i=j+1;i<n;i++)
	{
		if(arr[j]==arr[i]){
		for(k=i;k<n;k++){
		k=i;
		arr[k]=arr[k+1];
	}n--;i--;
	}}}
	for(i=0;i<n;i++)
	printf("%d",arr[i]);
		
return 0;
}
