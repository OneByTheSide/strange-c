//from https://frozencrate.com/articles/x-macros
#include <string.h>
#define XAll() X(Foo) X(Bar) X(Baz)

typedef enum {
    #define X(Name) Name,
    XAll()
    #undef X
} type;
const char *TypeToString(type Type) {
    switch (Type) {
    #define X(Name) case Name: return #Name;
    XAll()
    #undef X
    }
    return "Unknown";
}
type StringToType(char *String) {
    #define X(Name) if (!strcmp(#Name, String)) return Name;
    XAll()
    #undef X
    return -1;
}


int main()
{
	return 0;
}
