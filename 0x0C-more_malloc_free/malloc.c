#include <stdlib.h>
#include <stdio.h>


int main(){
    int x = 3;
    int n, i, *ptr;

  printf("Enter total number of value\n");
  scanf("%d", &n);

  ptr = (int *) malloc(n * sizeof(int));
  printf("\nEnter values:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", (ptr + i));
  }
  printf("The entered values are:");

  for (i = 0; i < n; i++)
  {
    printf("  %d    ", *(ptr + i));
  }
  
  free(ptr);

  if (ptr == NULL)
  {
    printf("Pointer is freed");
  }else{
    printf("%d", ptr);
  }
  

  return (0);

}