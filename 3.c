#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void swap(int*a,int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int arr[],int low,int high)
{
	int pivot=arr[low];
	int j=high;
	int i=low+1;
	