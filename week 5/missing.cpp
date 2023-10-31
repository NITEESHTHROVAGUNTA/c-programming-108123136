#include<stdio.h> 
int main()
{	int n,i,k=0,z,j;
 printf("enter the size of the arrray\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements of arrary\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(j=0;j<n;j++)
k=k+arr[j];
z=(n+1)*(n+2)/2;	
	
	printf(" %d is the missing term",z-k);
		
return 0;
}
