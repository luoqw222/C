#include <stdio.h>
//更多的printf特性
int main()
{
    unsigned int un=3000000000;
    short end=100;
    long big=65537;
    long long verybig=1234556578908642;

    printf("un=%u and not %d\n",un,un);
    printf("end=%hd and %d\n",end,end);
    printf("big=%ld and not %hd\n",big,big);
    printf("verybig=%lld and not %ld\n",verybig,verybig);

    return 0;
}