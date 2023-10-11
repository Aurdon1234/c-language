#include<stdio.h>
int main()
{
	int i=3,*ptri;
	float f=1.46,*ptrf;
	char c='c',*ptrc;
	ptri = &i;
	ptrf = &f;
	ptrc = &c;
	printf("Adderss of i: %u\n",ptri);
	printf("Address of f: %u\n",&f);
	printf("Address of c: %u\n",ptrc);
	printf("Value of i: %d\n",*ptri);
	printf("Value of f: %f\n",*ptrf);
	printf("Value of c: %c\n",*(&c));
	return 0;
}
