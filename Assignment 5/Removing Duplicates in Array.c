#include<stdio.h>
int main(){
	int a[8]={1,3,5,7,9,11,15,3};
	int i,j,flag;
	for(i=0;i<8;i++){
		flag=0;
		for(j=0;j<i;j++){
			if(a[i]==a[j]){
				flag=1;
				break;
			}
		}
		if(flag==0)
		printf("%d\n",a[i]);
	}
	return 0;
}
