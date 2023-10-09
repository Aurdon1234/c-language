#include<stdio.h>
void hcf(int,int);
int main(){
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	hcf(x,y);
	return 0;
}
void hcf(int a,int b){
	int hcf,i;
	for(i=1;i<=a || i<=b;i++){
		if(a%i==0 && b%i==0)
		hcf=i;
	}
	printf("hcf of %d and %d is %d",a,b,hcf);
}
