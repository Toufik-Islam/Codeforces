#include<stdio.h>

int main(void)
{
    int e,n,x,ptr=1;
    long long int move=0;
    scanf("%d%d",&e,&n);
    while(n--)
    {
        scanf("%d",&x);
        if(ptr<=x)
            move+=x-ptr;
        else
            move+=(e-ptr+x);
        ptr=x;
    }
    printf("%lld\n",move);
    return 0;
}
