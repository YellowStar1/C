#include<stdio.h>
int a(int *p,int *m,int *i,int *u);
void main(void)
{
	int m1=1;
	int m2=2;
	int m3=3;
	int m4=4;
	a(&m1,&m2,&m3,&m4);
	printf("---%d---%d---%d---%d---",m1,m2,m3,m4);
} 
int a(int *p,int *m,int *i,int *u)
{
	int temp;
	temp=*p;
	*p=*u;
	*u=temp;
	return temp;
}
