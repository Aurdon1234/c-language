#include<stdio.h>
int main(){
	int a[5]={1,2,3,4,5};
	int i,pos;
	printf("Enter the position of the item to be deleted: ");
	scanf("%d",&pos);
	for(i=pos;i<5;i++){
		a[i-1]=a[i];
	}	
	for(i=0;i<4;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
