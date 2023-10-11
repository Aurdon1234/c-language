#include<stdio.h>
int main()
{
	int arr1[5]={1,2,3,4,5};
	float arr2[5]={1.0,2.0,3.5,4.5,5};
	char str[5]="Hello";
	int *ptri=arr1;
	float *ptrf=arr2;
	char *ptrc=str;
	int i;
	for(i=0;i<5;i++)
	{
		printf("Address of arr1[%d]: %u\n",i,ptri);
		ptri++;
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("Address of arr2[%d]: %u\n",i,ptrf);
		ptrf++;
	}
		printf("\n");
	for(i=0;i<5;i++)
	{
		printf("Address of str[%d]: %u\n",i,ptrc);
		ptrc++;
	}
    return 0;
}
