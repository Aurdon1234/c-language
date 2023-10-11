#include<stdio.h>
int main()
{
	int i=3,*ptri;
	float f=1.46,*ptrf;
	char c='c',*ptrc;
	ptri = &i;
	ptrf = &f;
	ptrc = &c;
	printf("Size of i pointer: %d\n",sizeof(ptri));
	printf("Size of f pointer: %d\n",sizeof(&f));
	printf("SIze of c pointer: %d\n",sizeof(ptrc));
	return 0;
}
