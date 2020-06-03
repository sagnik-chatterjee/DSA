#include <stdio.h>
void copy(char s1[] ,char s2[] ,int index)
{
	s2[index]=s1[index];
	if(s1[index]='\0')
	{
		return;
	}
	else
	{
		copy(s1,ss2,index+1);
	}
}
int main()
{
	char s1[20];char s2[20];

	printf("Enter string to copy \n");
	for(int i=0;i<20;i++)
	{
		scanf("%d"s1[i]);
	}
	copy(s1,s2,0);
	printf("str2 after the copy \n");
	for(int i=0;i<20;i++)
	{
		printf("%d",s2[i]);
	}
	return 0;
}