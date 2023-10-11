#include<stdio.h>
#include<math.h>
int main(){
	int num,temp,digit,r,sum,x;
	scanf("%d",&num);
	temp=num;
	while(temp>0){
		temp/=10;
		digit++;
	}
	temp=num;
	x=digit;
	while(temp>0){
		r=temp%10;
		sum+=r*pow(2,digit-x);
		temp/=10;
		x--;
	}
	printf("Decimal: %d",sum);
	return 0;
}
