#include<stdio.h>
int main(){
	int arr[10]={1,4,2,6,7,8,5,44,67,19};
	int i,j,a;
	for(i=0;i<9;i++){
		for(j=0;j<9-i;j++){
			if(arr[j]>arr[j+1]){
				a=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=a;
			}
		}
	}
	for(i=0;i<10;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}
