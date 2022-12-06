#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d",&x);
    y=x;
    while(y!=0)
    {
        int r=y%10;
        if(r!=4 && r!=7)
            break;
        y=y/10;
    }
    if(y==0)
        printf("YES");
    else if(x%4==0 || x%7==0 ||x%47==0 ||x%74==0 ||x%77==0 ||x%474==0 ||x%447==0 ||x%744==0)
        printf("YES");
    else
        printf("NO");
}
