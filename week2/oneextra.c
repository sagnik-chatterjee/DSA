#include <stdio.h>
#include <stdlib.h>

double add(double *p,int n)
{
	double s1=0.0;
	for(int i=0;i<n;i++)
	{
		s1=s1+*(p+i);
	}
	return s1;
}
int main()
{
	double *p;
	int n;
	printf("Enter size: \n");
	scanf("%d",&n);
	p=calloc(n,sizeof(double));
	printf("Enter the elements \n ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",p+i);

	}
	printf("Sum =%f",add(p,n));
	void free(void *p);
	p=NULL;
	return 0;
}

