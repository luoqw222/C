#include <stdio.h>
//递增:前缀与后缀
int main() {
    int pre=0;
    int suc=0;
    while(suc<5)
    {
       ++pre;
       suc++;
       printf("pre=%d,suc=%d\n",pre,suc);
    }
    return 0;
}