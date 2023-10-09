#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,D,alpha,beta;
	printf("Enter the value of a: ");	
	scanf("%f",&a);
	printf("Enter the value of b: ");	
	scanf("%f",&b);
	printf("Enter the value of c: ");
	scanf("%f",&c);
	D=pow(b,2)-4*a*c;
	if(D>=0){
		alpha=(-b+sqrt(D))/2*a;
		beta=(-b-sqrt(D))/2*a;
	}
	printf("The roots of quadratic equation are %f and %f",alpha,beta);
	return 0;
}
