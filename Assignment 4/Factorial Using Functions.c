#include<stdio.h>
int fact(int);
int main(){
	int n;
	scanf("%d",&n);
	printf("factorial of %d is: %d",n,fact(n));
	return 0;
}
int fact(int a){
	int i;
	i=a-1;
	while(i>1){
		a*=i;
		i--;
	}
}
