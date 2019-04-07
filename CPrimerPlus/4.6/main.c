#include <stdio.h>
//使用转换说明
#define PI 3.14159
int main()
{
    int num=7;
    float pie=12.75;
    int cost=7800;
    printf("the %d contestants ate %f berry pies.\n",num,pie);
    printf("The valve of pi if %f.\n",PI);
    printf("Farewell!\n");
    printf("%c%d",'$',2*cost);
    return 0;
}