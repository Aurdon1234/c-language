#include<stdio.h>
int main()
{
	int i=3,*ptri;
	float f=1.46,*ptrf;
	char c='c',*ptrc;
	ptri = &i;
	ptrf = &f;
	ptrc = &c;
	printf("Adderss of i: %u\n",sizeof(ptri));
	printf("Address of f: %u\n",sizeof(&f));
	printf("Address of c: %u\n",sizeof(ptrc));
	return 0;
}
