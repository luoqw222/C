#include <stdio.h>
//自动类型转换
int main() {
    char ch;
    int i;
    float fl;

    fl=i=ch='C';
    printf("ch=%c,i=%d,fl=%2.2f\n",ch,i,fl);
    i=fl+2*ch;
    fl=2*ch+i;

    printf("ch=%c,i=%d,fl=%2.2f\n",ch,i,fl);
    ch=1107;
    printf("now ch=%c\n",ch);
    ch=80.89;
    printf("now ch=%c\n",ch);
    return 0;
}