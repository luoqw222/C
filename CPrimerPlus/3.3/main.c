#include <stdio.h>
//十进制 八进制 十六进制 显示100
int main()
{
    int x=100;
    printf("dec=%d;octal=%o;hex=%x\n",x,x,x);
    printf("dec=%d;octal=%#o;hex=%#x\n",x,x,x);
    return 0;
}