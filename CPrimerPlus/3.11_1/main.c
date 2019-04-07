#include <stdio.h>
//整数上溢,浮点数上溢 下溢
int main()
{
    int a=1234567890987654321;
    float b=123456789.987654321;
    float c=0.00000000000000000001234567890;
    printf("%d\n",sizeof(int));
    printf("\n");
    printf("a=%d\n",a);
    printf("b=%f\n",b);
    printf("c=%f\n",c);
    return 0;
}