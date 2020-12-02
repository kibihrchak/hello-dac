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

/**
 *  This is a main function
 * 
 *  This main function does some **serious stuff**.
 * 
 *  \param  argc    Number of arguments
 *  \param  argv    Arguments, duh
 *  \return         0 if all is okay
 */
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
