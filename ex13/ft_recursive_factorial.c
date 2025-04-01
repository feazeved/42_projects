int ft_recursive_factorial(int nb)
{
  if (nb < 0)
    return (0);
  if (nb > 1)
    nb = ft_recursive_factorial(nb - 1) * nb;
  return (nb);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  if (argc == 2)
    printf("the factorial is: %d", ft_recursive_factorial(atoi(argv[1])));
  printf("\n");
  return (0);
}
