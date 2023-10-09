#include<stdio.h>
int main(){
	int i=1,n,f=1;
	scanf("%d",&n);
	while(i<=n){
		f=f*i;
		i++;				
	}
	printf("factorial is %d",f);
	return 0;
}
