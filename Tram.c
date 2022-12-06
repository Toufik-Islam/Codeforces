#include<stdio.h>

int main()
{
    int t,max=0,m=0;
    scanf("%d",&t);
    while(t--)
    {
        int a,d;
        scanf("%d %d",&a,&d);
        m=m+d-a;
        if(m>max)
            max=m;
    }
    printf("%d",max);
}
