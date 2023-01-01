#include<stdio.h>

int main(void)
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(n>m)
        m%2==0?printf("Malvika"):printf("Akshat");
    else
        n%2==0?printf("Malvika"):printf("Akshat");

    return 0;
}
