//Write a program to ask the user to input a number of data values like to enter the create an array dynamically to accommmodate the data values. Now take the input from the user and display the avarage of the data values.

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
