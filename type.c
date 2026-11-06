#include <stdio.h>
struct A
{
	int b;
} a = {.b = 3},
  *b = &a,
  c[2] = {{.b = 4}};

int main()
{
	int a = 3,*b = &a;
	return 0;
}
