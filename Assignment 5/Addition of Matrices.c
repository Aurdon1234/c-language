#include<stdio.h>
int main()
{
	int row,col;
	printf("Enter the rows and columns of the matrices");
	scanf("%d%d",&row,&col);
	int a[row][col],b[row][col];
	int i,j,k,sum;
	printf("Enter the values in first matrix: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the values in second matrix: \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	int c[row][col];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		    printf("%d   ",c[i][j]);	
		} 
		printf("\n");
	}
	return 0;
}
