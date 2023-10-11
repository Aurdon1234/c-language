#include<stdio.h>
int main(){
	int i,j,num,row,col,a[100][100];
	printf("Enter the number of rows: ");
	scanf("%d",&row);
	printf("Enter the number of cols: ");
	scanf("%d",&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&num);
			a[i][j]=num;
		}
	}
	printf("Original Matrix: \n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Transpose of Matrix: \n");
	for(i=0;i<col;i++){
		for(j=0;j<row;j++){
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
