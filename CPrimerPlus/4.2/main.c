#include <stdio.h>
#define PRAISE "You are an extroordinary being."
int main() {
    char name[40];
    printf("what's your name?\n");
    scanf("%s",name);
    printf("Hello %s,%s\n",name,PRAISE);
    return 0;
}