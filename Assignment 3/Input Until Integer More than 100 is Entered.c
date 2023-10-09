#include<stdio.h>
int main(){
	int a;
	while(a<101){
		scanf("%d",&a);
		if(a>100)
		break;
		else
		printf("%d\n",a);
	}
	return 0;
}
