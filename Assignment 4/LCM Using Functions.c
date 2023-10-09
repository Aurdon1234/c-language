#include<stdio.h>
void lcm(int,int);
int main(){
	int x,y;
	scanf("%d",&x);
	scanf("%d",&y);
	lcm(x,y);
	return 0;
}
void lcm(int a,int b){
	int max;
	max=(a>b)?a:b;
	while(max>0){
		if ((max%a==0)&&(max%b==0)){
			printf("lcm of %d and %d is %d",a,b,max);
			break;
	}
	max++;
	}
}
