#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	c=a>b?a:b;
	printf("The greater number is: %d",c);
	return 0;
}
