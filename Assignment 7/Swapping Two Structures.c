#include<stdio.h>
int main()
{
	struct mark
	{
		char name[20];int rollno;float marks;
	};
	struct mark m1={"NameABC",101,99},m2={"NameDEF",102,33};
	struct mark temp;
	printf("Initial Structures: \n");
	printf("%s\n%d\n%f\n\n\n",m1.name,m1.rollno,m1.marks);
	printf("%s\n%d\n%f\n\n\n",m2.name,m2.rollno,m2.marks);
	temp=m2;
	m2=m1;
	m1=temp;
	printf("Swapped Structures: \n");
	printf("%s\n%d\n%f\n\n\n",m1.name,m1.rollno,m1.marks);
	printf("%s\n%d\n%f\n\n\n",m2.name,m2.rollno,m2.marks);
	return 0;
}
