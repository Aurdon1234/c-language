#include<stdio.h>
int main(){
	int i,j,x,a[9]={1,2,3,4,5,6,7,8,9};
	int l=0,h=8,mid=(l+h/2),num;
	printf("Enter the number to be searched : ");
	scanf("%d",&num);
	while(l<=h){
		if(num==a[mid]){
			printf("num found at %d",mid);
			break;
		}
		else if(num>a[mid]){
			l=mid+1;
			mid=(l+h)/2;
		}
		else{
			h=mid-1;
			mid=(l+h)/2;
		}
	}
	return 0;
}
