#include<stdio.h>
int swap(int*,int*);
int main()
{
	int a=5,b=10;
	printf("a: %d\n",a);
	printf("b: %d\n\n",b);
	swap(&a,&b);
	printf("a: %d\n",a);
	printf("b: %d\n\n",b);
	return 0;
}
int swap(int *x,int *y)
{
	int t;
	t=*x;
	*x=*y;
	*y=t;
	return 0;
}
