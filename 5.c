//Write a program to read a one dimensional  array, print sum of all elements along with inputted array elements using DMA.

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
  int i,size;
  int sum=0;
  printf("\nEnter the size of array: ");
  scanf("%d",&size);
  ptr=(int *)malloc(size*sizeof(int));
  if(ptr==NULL)
  {
    printf("\nMemory allocation failed!\n ");
    return 0;
  }
  printf("\nEnter the %d values: ",size);
  for(i=0;i<size;i++)
  {
    scanf("%d",ptr+i);
  }
  for(i=0;i<size;i++)
  {
    sum=sum+(*(ptr+i));
  }
  printf("\nSum is %d\n",sum);
  free(ptr);
  return 0;
}
