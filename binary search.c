#include<stdio.h>
int main()
{
	int a[]={10,20,30,40,50,60},x=30,
	low=0,
	high=5,
	mid=((low+high)/2);
	printf("%d",mid);
	while(low<=5)
	{
		if(a[mid]==x)
		{
			printf("a[mid]\n");
				
		}
		printf("elment is found %d.",x);
			break;
			
	 if(a[mid]>x)
	 {
	 	low=mid-1;
	 }
	 else if(a[mid]>x)
	 {
	 	high=mid-1;
	 }
	 printf("%d",x);
	 return 0;
	 
    }
}

