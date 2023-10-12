#include<stdio.h>
#include<string.h>
struct inner
{
	char name[20];int marks;
};
struct outer
{
	char school[20];
	struct inner i;
};
int main()
{
	struct outer o;
	o.i.marks=99;
    strcpy(o.i.name,"ABC");
    strcpy(o.school,"ABC School");
	printf("%s\n",o.school);
	printf("%s\n",o.i.name);
	printf("%d\n",o.i.marks);
	return 0;
}
