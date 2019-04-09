#include <stdio.h>
//跳过输入中的前两个数
//注意%d前边要加*
int main() {
    int n;
    printf("请输入三个整数:\n");
    scanf("%*d %*d %d",&n);
    printf("最后一个整数是:%d\n",n);

    return 0;
}