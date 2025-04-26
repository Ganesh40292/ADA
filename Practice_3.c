#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("Even numbers are:");
	for(i=1;i<=n;i++)
	{
		printf("%d ""\n",2*i);
	}
}
