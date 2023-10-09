#include<stdio.h>
int main(){
	int a,b,i;
	printf("Enter the first integer: ");
	scanf("%d",&a);
	printf("Enter the second integer: ");
	scanf("%d",&b);
	printf("Enter:\n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n5 for Modulus\n");
	scanf("%d",&i);
	if(i==1)
	printf("%d+%d=%d",a,b,a+b);
	else if(i==2)
	printf("%d-%d=%d",a,b,a-b);
	else if(i==3)
	printf("%d*%d=%d",a,b,a*b);
	else if(i==4)
	printf("%d/%d=%d",a,b,a/b);
	else if(i==5)
	printf("%d%%%d=%d",a,b,a%b);
	else
	printf("Enter valid integer");
	return 0;
}
