#include<stdio.h>
int main()
{
	int r1,c1,r2,c2;
	printf("Enter the rows and columns of first matrix");
	scanf("%d%d",&r1,&c1);
	printf("Enter the rows and columns of second matrix");
	scanf("%d%d",&r2,&c2);
	int a[r1][c1],b[r2][c2];
	int i,j,k,sum;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	if(c1!=r2)
	printf("Multiplication not Possible");
	else
	{
	int c[r1][c2];
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			sum=0;
			for(k=0;k<r2;k++)
			{
				sum+=a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d   ",c[i][j]);
		}
		printf("\n");		
	}
    }
	return 0;
}
