#include <stdio.h>
#include <stdlib.h>
 
void add(int x[][] ,int y[][],int n, int m) //for question no1 
{
	int sum[n][m];
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
   	   	{
   		    sum[i][j]=x[i][j]+y[i][j];
   	    }
      for(int i=0;i<n;i++)
      {
      	for(int j=0;j<m;j++)
      	{
      		printf("%d",sum[i][j]);
      	}
      }
   }
}

int linearsearch(int arr[], int size,int elem) //for question no 2
{
	int temp= arr[0];
	
for(int i=0;i<size;i++)
{
	if(arr[i]== elem)
	{
		temp = elem;
	}
    else
    {
    	temp =-1;
    }
  }
  return temp;
}
/*would take large time *///void matricesproduct(int matrix1[][] ,int matrix2[][],int n ,m );

int secondlargest(int arr[] ,int size)
{
	//first finding the largest
  int largest = arr[0];
  int largest_posn = 0;
  for(int i=0;i<size;i++)
  {
  	for(int j=0;j<size;j++)
  	{
       if (arr[i] <arr[j])
       {
       	largest =arr[j];
       	largest_posn=j;
       }
		
  	}
  }
  int sec_largest = arr[1];
  int sec_largest_posn = 1;
 for(int i=0;i<size;i++)
 {
 	for(int j=0;j<n;j++)
 	{
 	if(arr[i]!=largest_posn)
 	{
 		if(arr[i]<arr[j])
 		{
 			sec_largest =arr[j];
            sec_largest_posn = j;
 		}
 	}
  }
 }
 return sec_largest; 
}



int main()
{

}