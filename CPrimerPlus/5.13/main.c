#include <stdio.h>
//几种常见的语句
int main() {
    int count,sum;
    count=0;
    sum=0;
    while(++count<=20)
    {
        sum+=count;
    }
    printf("sum=%d",sum);
    return 0;
}