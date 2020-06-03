#include <stdio.h>
#include <Stdlib.h>

int reverse_arr(int *p ,int n);
int main()
{
	int *a =(int*)calloc(10,sizeof(int));
	int i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	reverse_array(a,n);
	printf("The reversed array is \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(a+i));
	}
}
void reverse_array(int *p,int n)
{
	int i,temp;
	for(i=0;i<n/2;i++)
	{
		temp=*(p+i);
		*(p+i)=*(p+(n-i-1));
		*(p+(n-i-1))=temp;
	}
}