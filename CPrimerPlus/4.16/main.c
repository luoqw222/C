#include <stdio.h>
//使用变宽输出字段
int main() {
    unsigned width,precision;
    int number=256;
    double weight=242.5;

    printf("please enter a field width:\n");
    scanf("%d",&width);
    printf("The number is :%*d\n",width,number);
    printf("now,enter a width and a precision:\n");
    scanf("%d %d",&width,&precision);
    printf("Weigth=%*.*f",width,precision,weight);
    printf("Done!");
    return 0;
}