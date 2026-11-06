#include <stdio.h>
#define STRINGIFY(a) #a
#define CONCAT(a,b) a ## _ ## b
void CONCAT(Foo,One)()
{
	printf("\nFoo One\n");
}
void CONCAT(Foo,Second)()
{
	printf("Foo Second\n");
}
int main()
{
	printf(STRINGIFY(Hello));
	Foo_One();
	Foo_Second();
	return 0;
}
