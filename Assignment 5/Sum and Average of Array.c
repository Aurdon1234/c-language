#include<stdio.h>
int main(){
	int a[6]={34,12,38,35,98,38};
	int i,sum;
	for(i=0;i<6;i++){
		sum+=a[i];
	}
	printf("Sum of the elements in array is: %d\n",sum);
	printf("Avg of the elements in array is: %d",sum/6);
	return 0;
}
