#include <stdio.h>
//如果编译器不识别%z,尝试换成%u或者%lu
#include<string.h>
#define PRAISE "You are an extraordinary being."
int main()
{
    char name[40];

    printf("what's your name?\n");
    scanf("%s",name);
    printf("Hello %s,%s\n",name,PRAISE);
    printf("Your name of %zd letters occpies %zd memory cells.\n",
            strlen(name), sizeof name);
    printf("The phrase of praise has %zd letters.",strlen(PRAISE));
    printf("and occupies %zd memory cells.\n",sizeof PRAISE);
    return 0;
}