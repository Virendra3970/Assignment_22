//Write a program to input and print text using dynamic memory allocation.

#include<stdio.h>
#include<stdlib.h>
int main()
{
  char *str;
  int size,i;
  printf("\nEnter the size of the text: ");
  scanf("%d",&size);
  str=(char *)malloc(size*sizeof(char));
  if(str==NULL)
  {
    printf("\nMemory Allocation fialed.\n");
    return 0;
  }
  printf("Enter your text: ");
  for(i=0;i<size;i++)
  {
    scanf("%c",str+i);
  }
  printf("\nYour Entered Text is: ");
  for(i=0;i<size;i++)
  {
    printf("%c",*(str+i));
  }
  free(str);
  return 0;
}
