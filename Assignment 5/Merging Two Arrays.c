#include<stdio.h>
int main(){
	int n,m,x,i;
	printf("Enter the length of array A: \n");
	scanf("%d",&n);
	printf("Enter the length of array B: \n");
	scanf("%d",&m);
	int a[n],b[m];
	for(i=0;i<n;i++){
		scanf("%d",&x);
		a[i]=x;
	}
	for(i=0;i<m;i++){
		scanf("%d",&x);
		b[i]=x;
	}
	int c[n+m];
	for(i=0;i<n;i++){
		c[i]=a[i];
	}
	for(i=n;i<(n+m);i++){
		c[i]=b[i-n];
	}
	printf("Merged array: \n");
	for(i=0;i<sizeof(c)/4;i++){
		printf("%d\n",c[i]);
	}
	return 0;
}
