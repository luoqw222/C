#include <stdio.h>
//使用limits.h中的float.h中定义的明示常亮
#include<limits.h>
#include<float.h>
int main()
{
    printf("Some number limits for these system:\n");
    printf("Biggest int:%d\n",INT_MAX);
    printf("Smallest longlong:%lld\n",LLONG_MIN);
    printf("One byte=%d on this system.\n",CHAR_BIT);
    printf("Largest double:%e\n",DBL_MAX);
    printf("Smallest normal float:%e\n",FLT_MIN);
    printf("float precision=%d digits\n",FLT_DIG);
    printf("float epsilon=%e\n",FLT_EPSILON);

    return 0;
}