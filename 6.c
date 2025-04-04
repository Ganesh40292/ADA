#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int n,i,j,minimum,temp;
	printf("Enter the array size:\n");
	scanf("%d",&n);
	int a[n]; 
	srand(time(NULL));
	for(i=0;i<n;i++)
	{
		a[i]=rand()%20000;
	}
	/*printf("Array value is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}*/
	clock_t start=clock();
	for(i=0;i<n-1;i++)
	{
		minimum=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[minimum])
			{
				minimum=j;
			}
		}
		temp=a[minimum];
		a[minimum]=a[i];
		a[i]=temp;
	}
	clock_t end=clock();
	double timetaken=((double)(end-start))/CLOCKS_PER_SEC;
	printf("The Time Taken is %f\n",timetaken);
}
	/*printf("\nThe sorted elememts are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
printf("\n");
}*/

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	