#include <stdio.h>
#define PI 3.14159
int main()
{
    float area, circum,radius;

    printf("So,what's your radius of your pizza.\n ");
    scanf("%f",&radius);
    area=PI*radius*radius;
    circum=2.0*PI*radius;
    printf("circum=%9.2f,area=%1.2f\n",circum,area);
    printf("%4d",7);
    return 0;
}