#include<stdio.h>
#include<stdlib.h>

int sort (const void * a, const void * b)
{   return ( *(int*)a - *(int*)b );    }

int main(void)
{
    int n,A[3],ans1=0,ans2=0;
    scanf("%d %d %d %d", &n, &A[0], &A[1], &A[2]);
    int x=n;
    qsort(A,3,sizeof(int),sort);

    if(n % A[0] == 0)
    {
        printf("%d\n",n/A[0]);
        return 0;
    }

    while(n!=0)
    {
        if(n<0)
        {
            ans1=0;
            break;
        }

        if(n%A[0]==0)
        {
            ans1+=n/A[0];
            break;
        }
        n-=A[1];
        ans1++;

    }
    if(ans1!=0)
    {
        printf("%d\n",ans1);
        return 0;
    }
    n=x;
    ans1=0;
    while(n!=0)
    {
        if(n<0)
        {
            ans1=0;
            break;
        }

        if(n%A[0]==0)
        {
            ans1+=n/A[0];
            break;
        }
        n-=A[2];
        ans1++;
    }



    return 0;
}

