int ft_sqrt(int nb)
{
  int i = 1;

  while (i * i <= nb)
  {
    if (i * i == nb)
      return (i);
    i++;
  }
  return (0);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  for(int i = 1; i < 100; i++)
  {
    printf("the square root of %d is: %d\n", i, ft_sqrt(i));
  }  
  return (0);
}
