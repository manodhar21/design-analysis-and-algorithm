#include<stdio.h>
void swap(int a,int b)
{
int	temp=a;
	a=b;
	b=temp;
	printf("%d %d",a,b);
}
void main()
{
	int a=10,b=20;
	swap(a,b);
}
