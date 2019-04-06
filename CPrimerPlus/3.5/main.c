#include <stdio.h>
//显示字符的代码编号C
int main()
{
    char ch;
    printf("please enter a character.\n");
    scanf("%c",&ch);
    printf("The code for %c is %d.\n",ch,ch);
    return 0;
}