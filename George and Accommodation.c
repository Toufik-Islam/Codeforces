#include<stdio.h>

int main()
{
    int n,free=0;
    scanf("%d",&n);
    while(n--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(y-x>1)
            free++;
    }
    printf("%d",free);
    return 0;
}

