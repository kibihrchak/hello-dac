#include <cstdio>

void foodir();

#ifdef FOO
void foo(const int a)
{
    printf("Hello foo %d\n", a);
}
#endif

#ifdef BAR
void bar(const int a)
{
    printf("Hello bar %d\n", a);
}
#endif

int main(int argc, char const *argv[])
{
    printf("Hello main\n");

#ifdef FOO
    foo(argc);
#endif

#ifdef BAR
    bar(argc);
#endif

    foodir();

    /* code */
    return 0;
}
