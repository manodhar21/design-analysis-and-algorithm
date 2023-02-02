#include<stdio.h>
int main()
{
	int a[]={100,10,30,40},i,x;
	int min=a[0],max=a[0];
	for(i=1;i<4;i--)
	{
	if (a[i]<min)
	{
		min=a[i];
	}
	if (a[i]>max)
	{
		max=a[i];
	}
}
		printf("\n min value is : %d",min);
		printf("\n max value is : %d",max);
		return 0;
			}
