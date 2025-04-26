#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n,k,a[20],b,flag=0;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("Enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element you want to find in the array:\n");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			b=i;
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("Element is found at position %d\n",b);
		exit(0);
	}
	else
	{
		printf("Element is not found\n");
	}
}
