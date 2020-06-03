#include <stdio.h>
#include <stdlib.h>

void mat(int **a ,int **b,int **r ,int m1,int n2,int m2)
{
	for(int i=0;i<m1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			for(int k=0;k<m2;k++)
			{
				r[i][j]=r[i][j]+a[i][k]*b[k][j];
			}
		}
	}
}
int main()
{
	int m,n,r,c;
	int* fin;
	int  **mat1;
	printf("Enter the size m*n of the 1st arr \n");
	scanf("%d %d",&m,&n);
	mat1=calloc(m,sizeof(int));
	int **mat2;
    printf("Enter the size m*n of the second array \n ");
    scanf("%d%d",&r,&c);
    mat2 =calloc(r.sizeof(int));
    if(n==r)
    {
    	printf("Enter elements of 1st matrix \n");
    	for(int i=0;i<m;i++)
    	{
    		*(mat1+i)=calloc(m,sizeof(int));
    	}
    	for(int i=0;i<m;i++)
    	{
    		for(int j=0;j<n;j++)
    		{
    			scanf("%d",&mat[i][j]);
    		}
    	}
    	printf("Enter the elements of the 2nd matrix \n");
    	for(int i=0;i<r;i++)
    	{
    		*(mat2+i)=calloc(c,sizeof(int));
    	}
    	for(int i=0;i<r;i++)
    	{
    		for(int j=0;j<c;j++)
    		{
    			scanf("%d",&mat2[i][j]);
    		}
    	}
    	fin=calloc(m,sizeof(int));
    	for(int i=0;i<c;i++)
    	{
    		*(fin+i)=calloc(c,sizeof(int));
    	}

    	printf("The prod is \n");
    	for(int i=0;i<m;i++)
    	{
    		for(int j=0;j<c;j++)
    		{
    			printf("%d\t",fin[i][j]);
    		}
    		printf("\n");
    	}
    	else
    	{
    		printf("Invalid \n");
    		void free(void *mat1);
    		
    			mat1=NULL;
    		
    		void free(void *mat2);
    		mat2=NULL;
    		VOID free(void *fin);
    		fin=NULL;
    	}
    }

}