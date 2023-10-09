#include<stdio.h>
int main(){
	int a=0,b=1,c;
	printf("%d\n",a);
	printf("%d\n",b);
	while(a+b<100){
		c=a+b;
		printf("%d\n",c);
		a=b;
		b=c;
	}	
	return 0;
}
