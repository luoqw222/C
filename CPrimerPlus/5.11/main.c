#include <stdio.h>
//前缀和后缀
int main() {
    int a=1,b=1;
    int a_post;
    int pre_b;
    a_post=a++;
    pre_b=++b;
    printf("a_post=%d,pre_b=%d",a_post,pre_b);
    return 0;
}