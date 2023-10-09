#include<stdio.h>
#include<math.h>
int main(){
	float x,n;
	printf("Enter the number: ");
	scanf("%f",&x);
	printf("Enter the value of n: ");
	scanf("%f",&n);
	printf("%f",pow(x,1/n));
	return 0;
}
