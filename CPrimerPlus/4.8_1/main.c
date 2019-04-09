#include <stdio.h>
//反向打印输入的名字
int main() {
    char fname[10];
    char lname[10];
    printf("please enter your first name:");
    scanf("%s",fname);
    printf("please enter your last name:");
    scanf("%s",lname);
    printf("%s %s",lname,fname);
    return 0;
}