#include<stdio.h>
int main()
{
	int i=3,*ptri;
	ptri = &i;
	printf("using %%x: %x\n",ptri);
	printf("using %%u: %u\n",ptri);
	printf("using %%p: %p\n",ptri);
	return 0;
}
