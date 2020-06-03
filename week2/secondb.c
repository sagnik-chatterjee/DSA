#include <stdlib.h>
int *small(int *p,int* q);
int main()
{

int*p ,*k ,s,t, **q;
printf("ENter value of s : \n");
scanf("%d",&s);
p=&s;
printf("ENter value of t \n");
scanf("%d",&t);
k=&t;

*q=small(p,k);
printf("SMaller=%d \n",**q);
}
int* small(int* p,int* q)
{
	if (*p < *q)
	{
		return p;
	}
	else
	{
		return q;
	}
}