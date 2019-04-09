#include <stdio.h>
#include<string.h>
//输入字符并打印字符
int main() {
    int fn,ln;
    char fname[10];
    char lname[10];
    printf("please enter your first name:");
    scanf("%s",&fname);
    printf("please enter your last name:");
    scanf("%s",&lname);
    fn=strlen(fname);
    ln=strlen(lname);
    printf("%d\n",fn);
    printf("%s %s\n",fname,lname);
    printf("%*d %*d\n",fn,fn,ln,ln);
    printf("%-*d %-*d\n",fn,fn,ln,ln);
    return 0;
}