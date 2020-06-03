#include <stdio.h>
#include <stdlib.h>
#include "selectionsort.h"
int main()
{
	int n,i,j,temp;
	int array[10];
	printf("Enter the value of n \n");
	scanf("%d",&n);
	printf("Enter the elements \n");
	for( i=0;i< n;i++)
	{
		scanf("%d",&array[i]);
	}
	//using the func selectionsort in it 

	selectionsort(array,n);
	printf("The sorted list is (using selection sort): \n");
	for( i=0;i<n;i++)
	{
		printf("%d\n",array[i]);
	}
}