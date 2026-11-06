#include <stdio.h>
/*
__LINE__ A decimal constant containing the current source line number. 
__FILE__ A string literal containing the name of the file being compiled. 
__DATE__ A string literal containing the date of compilation, in the form "Mmmm dd yyyy" 
__TIME__ A string literal containing the time of compilation, in the form "hh:mm:ss" 
__STDC__ The constant 1. It is intended that this identifier be defined to be 1 only in standard
conforming implementations. 
*/
void foo()
{
	printf("STDC?:%d in %s at %s or %s: %s:LINE:%d\n",__STDC__,__FILE__,__TIME__,__DATE__,__func__,__LINE__);
}
int main()
{
	foo();
	return 0;
}
