//Write a program inC to demonstrate dangling pointer.

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
  ptr=(int *)malloc(sizeof(int));
  *ptr=10;
  printf("\nBefore free: %d\n",*ptr);
  free(ptr);
  printf("\After free: %d\n",*ptr);
  return 0;
}
