//Write a program to allocate memory dynamically of the size in bytes entered by the user. Also handle the case when memory allocation is failed.

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
  int i,size;
  float sum=0;
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
  printf("\nAvarage is %f\n",sum/size);
  free(ptr);
  return 0;
}
