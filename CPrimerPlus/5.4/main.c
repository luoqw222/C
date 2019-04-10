#include <stdio.h>
//乘法运算
int main() {
    int num=1;
    while(num<=20)
    {
        printf("%4d %6d\n",num,num*num);
        ++num;
    }
    return 0;
}