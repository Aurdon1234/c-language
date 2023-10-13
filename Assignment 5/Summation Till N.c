#include<stdio.h>
int sum(int n)
{
	if(n==1)
	return 1;
	else
	return n+sum(n-1);
}
int main()
{
	int n;
	printf("Enter the number: \n");
	scanf("%d",&n);
	printf("Sum until %d is %d",n,sum(n));
	return 0;
}
