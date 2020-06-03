#include <stdio.h>
int main()
{
	int a;
	int *b, int **c;
	a=62;b=&a;c=&b;
	printf("%d",a);
	printf("%d",*b);
	printf("%d",**c);
}
