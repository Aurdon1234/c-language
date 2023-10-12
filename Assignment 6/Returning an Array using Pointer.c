#include<stdio.h>
int *incr(int X[3])
{
	int j;
	for(j=0;j<3;j++)
	X[j]++;
	return X;
}
int main()
{
	int A[3]={1,2,3},*B,i;
	B=incr(A);
	for(i=0;i<3;i++)
	printf("%d ",B[i]);
	return 0;
}
