#include <stdio.h>
//读取一个浮点数并使用不同的方式输出
int main() {
    float n;
    printf("please enter a number:");
    scanf("%f",&n);
    printf("The input is %.1f or %.1e\n",n,n);
    printf("The input is %+.3f or %.3E\n",n,n);
    return 0;
}