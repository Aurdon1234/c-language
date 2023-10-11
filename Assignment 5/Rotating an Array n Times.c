#include<stdio.h>
int main(){
	int arr[5]={1,2,3,4,5};
	int k,i,j,t;
	scanf("%d",&k);
	for(j=0;j<k;j++){
		for(i=3;i>=0;i--){
			t=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=t;
	    }
    }
	for(i=0;i<5;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
