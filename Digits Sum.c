#include<stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned int x;
        scanf("%u",&x);
        printf("%u\n",(x+1)/10);
    }
    return 0;
}


