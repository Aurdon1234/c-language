#include<stdio.h>
int addint(int);
int main(){
	int n;
	scanf("%d",&n);
	printf("Sum of integers is: %d",addint(n));
	return 0;
}
int addint(int a){
	int b,sum=0;
	while(a>0){
		b=a%10;
		sum+=b;
		a=a/10;
		
	}
	return sum;
}
