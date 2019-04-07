#include <stdio.h>
//输ASCII码值,输出字符
int main()
{
    int num;
    char ch[]="I love China!";
    printf("请输入ASCII码:\n");
    scanf("%d",&num);
    printf("\n");
    printf("%c\n",num);
    printf("%s\n",ch);
    return 0;
}