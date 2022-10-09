//Find out the maximum and minimum from an array using dynamic memory allocation in C.

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
  int max=-1000000,min=100000,i,size;
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
     if(min>(*(ptr+i)))
     {
       min=*(ptr+i);
     }
  }
  printf("\nMaximum value is %d\n",max);
  printf("\nMInimum value is %d\n",min);
  free(ptr);
  return 0;
}
