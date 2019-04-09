#include <stdio.h>
//一些不匹配的整形转换
#define PAGES 336
#define WORDS 65628

int main() {
    short num=PAGES;
    short mnum=-PAGES;
    printf("num: short:%hd,unsigned short:%hu\n",num,num);
    printf("-num:short:%hd,unsigned short:%hu\n",mnum,mnum);
    printf("num:int:%d,char:%c\n",num,num);
    printf("WORDS:int:%d,short:%hd,char:%c\n",WORDS,WORDS,WORDS);
    return 0;
}