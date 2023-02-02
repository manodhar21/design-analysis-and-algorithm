#include <stdio.h>
int main()
{
  int arr[]={100,30,96,22},a,b,swap;
  for (a=0;a<4-1;a++)
  {
    for (b=0;b<4-a-1;b++)
    {
      if (arr[b]>arr[b+1])
      {
        swap = arr[b];
        arr[b] = arr[b+1];
        arr[b+1] = swap;
      }
    }
  }
  printf("Sorted list in ascending order is:\n");
  for (a=0;a<4;a++)
     printf("%d\n",arr[a]);
  return 0;
}

