#include<stdio.h>
struct A
{
    int i;
    int j;
};
int main()
{
    struct A a, *b;
    a.i=99; 
    a.j=100;
    b=&a;
    printf("%u,%u,%u\n",&a,&a.i,&a.j);
    printf("%d,%d and %d,%d",a.i,b->i,a.j,b->j);
    return 0;
}
