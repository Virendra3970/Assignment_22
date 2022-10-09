//Write a program in C to find the highest value using DMA

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
  int max=-1000000,i,size;
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
     if(max<(*(ptr+i)))
     {
       max=(*(ptr+i));
     }
  }
  printf("\nMaximum value is %d\n",max);
  free(ptr);
  return 0;
}
