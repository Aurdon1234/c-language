#include<stdio.h>
void prime(int);
int main(){
	int n;
	printf("enter the value of n: ");
	scanf("%d",&n);
	prime(n);
	return 0;
}
void prime(int a){
	int i,b=2;
	while(a>0){
		for(i=2;i<b;i++){
			if(b%i==0)
			break;
		}
		if(i==b){
		printf("%d ",b);
		a--;
	    }
		b++;
	}
}
