#include<stdio.h>
int main(){
	int x,n,i=1,a;
	scanf("%d",&x);
	scanf("%d",&n);
	a=x;
	while(i<n){
		a*=x;
		i++;
	}
	printf("%d",a);
	return 0;
}
