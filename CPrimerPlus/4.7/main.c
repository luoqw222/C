#include <stdio.h>
//字段宽度
#define PAGES 99
int main()
{
    printf("*%d*\n",
            PAGES);
    printf("*%2d*\n",PAGES);
    printf("*%10d*\n",PAGES);
    printf("*%-10d*\n",PAGES);
    return 0;
}