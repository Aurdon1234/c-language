#include<stdio.h>
int main(){
	int a[]={1,2,3,4,5,6,7,8};
	int num,pos,i;
	printf("Enter the number and position: ");
	scanf("%d,%d",&num,&pos);
	for(i=(sizeof(a)/4)-1;i>=pos-1;i--){
		a[i+1]=a[i];
	}
	a[pos-1]=num; 
	for(i=0;i<sizeof(a)/4;i++){
		printf("%d\n",a[i]);
	} 
	return 0;
}
