#include <stdio.h>

void swap(int arr[],int x ,int y)
{
    int temp =arr[x];
    arr[x] =arr[y];
    arr[y] =temp;
}
void selectionsort(int arr[],int n)
{
	int pass,j,min_indx;
	//finding the min bundary in the unsorted array
	min_indx = pass;
	for(j=pass+1;j<n;j++)
	{
		if(arr[j]<arr[min_indx])
			min_indx=j;
	}
   //now swapping the minimum with the smallest element
	if(min_indx != pass)
		swap(arr,min_indx,pass);
 
  } 
