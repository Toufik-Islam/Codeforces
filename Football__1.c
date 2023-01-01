#include<stdio.h>

int main(void)
{
    int m,a,b;
    scanf("%d%d%d",&m,&a,&b);

    if(m==1&&a==b)
        printf("1\n%d:%d\n",a,b);
    else if(m==1)
        printf("0\n%d:%d\n",a,b);
    else if(m>=a+b)
    {
        int draw=m-a-b;
        printf("%d\n",draw);
        while(a--)
            printf("1:0\n");
        while(b--)
            printf("0:1\n");
        while(draw--)
            printf("0:0\n");
    }
    else if(m<=a && m<=b)
    {
        printf("0\n");
        if(a>=b)
        {
            int x=m-1;
            int rem_a= a-x;

            while(x--)
                printf("1:0\n");

            printf("%d:%d\n",rem_a,b);
        }
        else
        {
            int x=m-1;
            int rem_b= b-x;

            while(x--)
                printf("0:1\n");

            printf("%d:%d\n",a,rem_b);
        }
    }
    else
    {
        printf("0\n");
        if(a<m)
        {
            int x=m-a-1;
            int rem_b= b-x;
            while(a--)
            printf("1:0\n");
            while(x--)
            printf("0:1\n");

            printf("0:%d\n",rem_b);
        }
        else
        {
            int x=m-b-1;
            int rem_a= a-x;
            while(b--)
            printf("0:1\n");
            while(x--)
            printf("1:0\n");

            printf("%d:0\n",rem_a);
        }



    }
    return 0;
}
