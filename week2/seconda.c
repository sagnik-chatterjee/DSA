#include <stdio.h>
double getavg(int *arr,int size)

int main()
{
int balance[5]={12,13,14,15,16};
double avg;
avg=getAvg(balance,5);
printf("Answer %d\n",avg);
return 0;
}
double getAvg(int* arr, int size)
{
	int i,sum=0;
	double avg;
	for(i=0;i<size;i++)
	{
		sum+=arr[i];
	}
	avg=(double)sum/size;
	return avg;
}