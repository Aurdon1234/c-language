#include<stdio.h>
int main(){
	int num,temp,i=0,r,sum,a=0,arr[100];
	scanf("%d",&num);
	temp=num;
	for(i=0;temp>0;i++){
		r=temp%2;
		arr[i]=r;
		temp/=2;
		a++;
	}
	int j;
	for(j=a-1;j>=0;j--){
		printf("%d",arr[j]);
	}
	return 0;
}
