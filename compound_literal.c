#include <stdio.h>
typedef struct
{
	int a;
}A;
void dump(int a[],int size)
{
	for (int i = 0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
}
void foo(A b)
{
	printf("A.a:%d\n",b.a);
}
int main()
{
	dump((int[]){1,2,3},3);
	foo((A){.a = 3});
	A b = {
		.a = 4;
	}
	return 0;
}
