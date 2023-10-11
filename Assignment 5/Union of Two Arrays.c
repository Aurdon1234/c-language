#include<stdio.h>
int main(){
	int a[4]={1,3,5,15},b[6]={2,3,5,7,11,13};
	int i,j,k,flag=0;
	for(i=0;i<4;i++){
		printf("%d\n",a[i]);
	}
	for(j=0;j<6;j++){
		for(k=0;k<4;k++){
			if(b[j]==a[k]){
				flag=0;
				break;
			}
			else
			flag=1;
		}
		if(flag==1)
		printf("%d\n",b[j]);
	}
	return 0;
}
