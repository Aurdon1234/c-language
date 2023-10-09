#include<stdio.h>
void fibonacci(int);
int main(){
	int n;
	scanf("%d",&n);
	fibonacci(n);
	return 0;
}
void fibonacci(int a){
	int a1=0,b=1,c,m=2;
	printf("%d\n",a1);
	printf("%d\n",b);
	while(m<=a){
		c=a1+b;
		printf("%d\n",c);
		a1=b;
		b=c;
		m++;
	}
}
