#include <stdio.h>
#include <string.h>
#include <stdbool.h>


bool isPalRec(char str[] ,int s ,int e)
{
	if(s==e)
	{
		return true;
	}
	if(str[s]!=str[e])
	{
		return false;
	}
	if(s<e+1)
	{
		return isPalRec(str,s+1,e-1);
	}
	return true;
}
bool isPallindrome(char str[],int p)
{
	int n=p;
	if(n==0)//because 0 letter string is also pallindrome 
	{
		return true;
	}
	return isPalRec(str,0,n-1);
}

int main()
{  
	int n;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    char str[n];
    for(int i=0;i<n;i++)
    {
    	scanf("%c",&str[i]);
     }
    if(isPallindrome(str,n))
    {
    	printf("Yes\n");
    }
    else
    {
    	printf("No \n");
    }
return 0;

}