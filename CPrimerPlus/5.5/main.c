#include <stdio.h>
//指数增长
#define SQUARES 64
int main() {
    const double CROP=2E16;//世界总数
    double current,total;
    int count=1;
    total=current=1.0;
    while(count<SQUARES)
    {
        ++count;
        current*=2;
        total+=current;
        printf("%4d %13.2e %12.2e %12.2e\n",count,current,total,total/CROP);
    }
    return 0;
}