#include<stdio.h>
int main()
{
	int  i,j,num,sum=0;
	printf("enter the armstrong number");
	scanf("%d",&i);
	num=i;
	while (num!=0)
	{
	  j=num%10;
	  sum=sum+(j*j*j);
	  num=num/10;
	  
	}
	if (num==0)
	{
		printf("%d is an armstrong number",i);
	}
	else
	{
		printf("%d is not an armstrong number",i);
	}
	return 0;
}
