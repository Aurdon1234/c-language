#include<stdio.h>
int main(){
	int n;
	printf("Enter the length of array A: \n");
	scanf("%d",&n);
	int num,x,i,a[n],flag;
	for(i=0;i<n;i++){
		scanf("%d",&x);
		a[i]=x;
	}
	printf("Enter the number to be searched: ");
	scanf("%d",&num);
	flag=0;
	for(i=0;i<n;i++){
		if(a[i]==num){
			flag=1;
			printf("%d is present at index number %d.",num,i);
			break;
		}
	}
	if(flag==0)
	printf("Element not found");
	return 0;
}
