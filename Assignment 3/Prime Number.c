#include<stdio.h>
int main(){
	int a,i=2,flag=0;
	scanf("%d",&a);
	for(i=2;i<a;i++){
		if(a%i==0){
			flag=1;
			break;
		}
	}
	if(flag==1)
	printf("number is not prime");
	else
	printf("number is prime");
	return 0;
}
