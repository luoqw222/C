#include <stdio.h>
void P();
int main()
{
    for(int i=0;i<3;i++)
    {
        int j=3-i;
        while(j>0)
        {
            P();
            j--;
        }
        printf("\n");
    }
    return 0;
}
void P()
{
    printf("Smile!");
}
