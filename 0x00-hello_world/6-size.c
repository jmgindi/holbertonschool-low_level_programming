#include <stdio.h>
main(int)
{
  printf("Size of a char: %d bytes\n", sizeof(char));
  printf("Size of an int: %d bytes\n", sizeof(int));
  printf("Size of a long int: %d bytes\n", sizeof(long));
  printf("Size of a long long int: %d bytes\n", sizeof(long long));

  return 0;
}

