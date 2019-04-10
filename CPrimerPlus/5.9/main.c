#include <stdio.h>
//求模运算符,将秒转化为分和秒
int main() {
    int sec,min,left;
    printf("please enter a num of sec:");
    scanf("%d",&sec);
    while(sec>0)
    {
        min=sec/60;
        left=sec-min*60;
        printf("%d is %d mins and %d sec\n",sec,min,left);
        printf("please enter a num of sec:");
        scanf("%d",&sec);
    }
    return 0;
}