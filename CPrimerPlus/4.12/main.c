#include <stdio.h>
//一些不匹配的浮点转换
int main() {
    float n1=3.0;
    double n2=3.0;
    long n3=2000000000;
    long n4=1234567890;

    printf("%.1e %.1e %.1e %.1e \n",n1,n2,n3,n4);
    printf("%ld %ld \n",n3,n4);
    printf("%ld %ld %ld %ld",n3,n2,n1,n2);
    return 0;
}