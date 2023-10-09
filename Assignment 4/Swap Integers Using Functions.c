#include<stdio.h>
void swap(int,int);
int main(){
	int a,b;
	printf("enter a: \n");
	scanf("%d",&a);
	printf("enter b: \n");
	scanf("%d",&b);
	swap(a,b);
	return 0;
}
void swap(int x,int y){
	printf("a= %d\n",y);
	printf("%b= %d",x);
}
