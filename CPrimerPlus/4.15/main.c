#include <stdio.h>
//使用输入程序
int main() {
    int age;
    float asset;
    char pet[30];

    printf("Please enter your age,asset,and favorite pet.\n");
    scanf("%d %f",&age,&asset);
    scanf("%s",pet);
    printf("%d %f %s\n",age,asset,pet);

    return 0;
}