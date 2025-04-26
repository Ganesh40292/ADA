#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%d is an even number\n",n);
		exit(0);
	}
	else
	{
		printf("%d is an odd number\n",n);
		exit(0);
	}
}
		
