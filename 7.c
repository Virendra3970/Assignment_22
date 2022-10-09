//Write a program to demonstrate memory leak.

#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr;
  ptr=(int*)malloc(sizeof(int));
  *ptr=10;
  ptr=NULL;
  return 0;
}
