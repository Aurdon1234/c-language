#include<stdio.h>
int main(){
	int a, sum=0;
	while(a){
		printf("Enter the number: ");
		scanf("%d",&a);
		if (a==-999)
		break;
		else
		sum=sum+a; 
	}
	printf("Sum until -999 is %d",sum);
	return 0;
}
