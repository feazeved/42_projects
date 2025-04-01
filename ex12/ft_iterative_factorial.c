int ft_iterative_factorial(int nb)
{
  int factorial;

  factorial = 1;
  if (nb < 0)
    return (0);
  while (nb > 1)
  {
    factorial = factorial * nb;
    nb--;
  }
  return (factorial);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  printf("the factorial of %d is: %d\n", (atoi(argv[1])), ft_iterative_factorial(atoi(argv[1])));
  return (0);
}
