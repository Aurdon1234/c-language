#include<stdio.h>
int fibonacci(int n)
{
	if(n<=1)
	return n;
	else
	return fibonacci(n-1)+fibonacci(n-2);
	
}
int main()
{
	int n;
	printf("Enter the number: \n");
	scanf("%d",&n);
	printf("%d\n",fibonacci(n-1));
	return 0;
}
