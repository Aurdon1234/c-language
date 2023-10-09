#include<stdio.h>
#include<math.h>
int main(){
	int r,n=0,sum=0,temp,num;
	printf("Enter the number: ");
	scanf("%d",&num);
	temp=num;
	while(temp>0){
		temp=temp/10;
		n++;
	}
	temp=num;
	while(temp>0){
		r=temp%10;
		sum=sum+pow(r,n);
		temp=temp/10;
	}
	if(sum==num)
	printf("Armstrong Number");
	else
	printf("Not Armstrong Number");
	return 0;
}
