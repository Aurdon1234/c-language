#include<stdio.h>
int main()
{
	struct mark
	{
		char name[20];int rollno;float marks;
	};
	struct mark m1={"NameABC",101,99};
	printf("%s\n%d\n%f\n",m1.name,m1.rollno,m1.marks);
	return 0;
}
