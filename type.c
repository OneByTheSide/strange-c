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
	struct temp
	{
		int a;
	} t = {0}; //HOLY SHIT LOCAL STRUCT DECLARATION
	return 0;
}
//void err()
//{
//	struct temp no = {0}; //compiler would shout out error
//}
