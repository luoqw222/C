#include <stdio.h>
#include<float.h>
//各种格式输出1/3
int main() {
    double b=1.0/3.0;
    float f=1.0/3.0;
    printf("double:%.3f %.6f %.12f %16f\n",b,b,b,b);
    printf("float:%.3f %.6f %.12f %16f",f,f,f,f);
    return 0;
}