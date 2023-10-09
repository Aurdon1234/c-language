#include<stdio.h>
void prime(int);
int main(){
	int a;
	scanf("%d",&a);
	prime(a);
	return 0;
}
void prime(int x){
	int i=2,flag=0;
	for(i=2;i<x;i++){
		if(x%i==0)
		flag=1;
		break;
	}
	if(flag==1)
	printf("number is not prime");
	else
	printf("number is  prime");
}
