#include<stdio.h>
int main(){
	int a[8]={1,3,5,7,9,11,13,15},b[6]={2,3,5,7,11,13};
	int i,j;
	for(i=0;i<8;i++){
		for(j=0;j<6;j++){
			if(a[i]==b[j]){
				printf("%d\n",a[i]);
			}
		}
	}
	return 0;
}
