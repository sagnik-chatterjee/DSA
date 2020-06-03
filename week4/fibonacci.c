#include <stdio.h>
int fib(int n)
{
	if(n==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return 1;
	}
	else 
		return fib(n-2)+fib(n-1);
}

int main()
{
	int n;
	printf("Enter the no. for fibonacci sequence \n");
	scanf("%d\n",&n);
	int ans[n];
	for(int i=0;i<n;i++)
	{
		ans[i]=fib[i];
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\n",ans[i]);

	}
	return 0;
}