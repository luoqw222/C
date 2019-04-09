#include <stdio.h>
//输入厘米,打印米
int main() {
    float height;
    float meter;
    printf("please enter your height in cm:\n");
    scanf("%f",&height);
    meter=height/100;
    printf("So,your height is %.2f meters !",meter);
    return 0;
}