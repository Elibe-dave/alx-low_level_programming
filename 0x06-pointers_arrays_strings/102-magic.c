#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

  a[2] = 1024;
  p = &n;

  /*
   * Add the following line of code to assign the value 98 to a[2]
   * without using the variable a or modifying p.
   * Remember:
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */

  int diff = p - &n;  // calculate the difference between p and &n
  int *addr = &a[2] - diff;  // calculate the address of a[2] in the context of p and n
  *addr = 98;  // assign the value 98 to the memory location pointed to by addr

  (void) printf("%d", *addr);  // print the value 98

  printf("a[2] = %d\n", a[2]);
  return (0);
}
