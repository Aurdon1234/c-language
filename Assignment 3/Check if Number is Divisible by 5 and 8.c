#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	a%5==0?(a%8==0?printf("Number is divisible by both 5 and 8"):printf("Number is divisible by 5 but not by 8")):(a%8==0?printf("Number is divisible by 8 but not by 5"):printf("Number is neither divisible by 5 onr by 8"));
	return 0;
}
