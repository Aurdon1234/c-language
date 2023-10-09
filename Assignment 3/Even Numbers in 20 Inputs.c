#include<stdio.h>
int main(){
	int a,i=0,count=0;
	while(i<20){
		scanf("%d",&a);
		if(a%2==0)
		count+=1;
		i+=1;
	}
	printf("count is: %d",count);
	return 0;
}
