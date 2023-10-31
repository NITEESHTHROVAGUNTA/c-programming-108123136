#include<stdio.h> 
int main()
{	int n,i,j=0,k;
 printf("enter the size of the arrray\n");
	scanf("%d",&n);
	printf("enter k\n");
	scanf("%d",&k);
	int arr[n];
	printf("enter the elements of arrary\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	for(i=0;i<n;i++)
	{
		if(arr[i]=k)
		{
		j++;}
	}
	printf("the n.o k repeated %d times",j);

return 0;
}
