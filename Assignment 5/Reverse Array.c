#include<stdio.h>
int main(){
	int a[7]={1,2,3,4,5,6,7};
	int i,temp;
	for(i=0;i<(7/2);i++){
		temp=a[i];
		a[i]=a[6-i];
		a[6-i]=temp;
	}
	for(i=0;i<7;i++){
		printf("%d, ",a[i]);
	}
	return 0;
}
