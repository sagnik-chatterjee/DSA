#include <stdio.h>
#include "selection.h"
 void selectionsort()
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
}