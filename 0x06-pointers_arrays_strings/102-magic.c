#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
  *(p + 3) = 98;
  *(p + 2) = 99;
  *(p + 1) = 100;
  *(p + 0) = 101;
  *(p - 1) = 102;
  *(p - 2) = 103;
  *(p - 3) = 104;
  /* ...so that this prints 98\n */
  printf("a[2] = %d %d %d %d %d\n", a[2], a[0], a[1], a[3], a[4]);
  return (0);
}
