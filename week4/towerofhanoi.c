#include <stdio.h>
void towers(int num,char frompeg,char topeg,char auxpeg)
{
	if(num==1)
	{
		printf("\n Move disk 1 from peg %c to peg %c ",frompeg ,topeg);
	}
	else
	{
		towers(num-1,frompeg,auxpeg,topeg);
		printf("\n Move disk %d from peg %c to peg %c",num ,frompeg ,topeg);
         towers(num-1,auxpeg,topeg,frompeg);	
	}
}
int main()
{
	int num;
	printf("The no of disks are ?? \n");
	scanf("%d",&num);
	printf("The sequence of movements involved are \n");
	towers(num,'A','B','C');
	return 0;
}