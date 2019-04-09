#include <stdio.h>
//跳过输入中的前两个数
//结果失效,不能讲最后一个输入赋值给n
int main() {
    int n;
    printf("请输入三个整数:\n");
    scanf("%d %d %d",&n);
    printf("最后一个整数是:%d\n",n);

    return 0;
}