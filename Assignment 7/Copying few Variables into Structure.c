#include<stdio.h>
#include<string.h>
int main()
{
	struct mark
	{
		char name[20];int rollno;float marks;
	};
	struct mark m1={"NameABC",101,99},m2={"NameDEF",102,33};
	struct mark m3;
	strcpy(m3.name,m1.name);
	m3.rollno=m2.rollno;
	m3.marks=50;
	printf("%s\n%d\n%f\n",m3.name,m3.rollno,m3.marks);
	return 0;
}
