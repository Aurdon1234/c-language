#include<stdio.h>
int main(){
	int i,a[10]={12,54,84,26,46,21,97,11,58,75};
	int large=a[0],small=a[0];
	for(i=0;i<10;i++){
		if(large<a[i+1])
		large=a[i+1];
		}
	for(i=0;i<10;i++){
		if(small>a[i+1])
		small=a[i+1];
		}
	printf("Largest number is: %d\n",large);
	printf("Smallest number is: %d",small);
	return 0;
}
