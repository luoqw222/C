#include <stdio.h>
#include<string.h>
//输入自己的名字,然后各种输出
int main() {
    char name[10];
    printf("please enter your name:");
    scanf("%s",&name);
    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    printf("%*s\n",strlen(name),name);
    return 0;
}