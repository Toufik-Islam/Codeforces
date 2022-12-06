#include<stdio.h>

int main()
{
    int n,add=0,count=0,sum=0;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>0-i;j--)
        {
            if(A[j]>A[j-1])
            {
                int temp=A[j];
                A[j]=A[j-1];
                A[j-1]=temp;
            }
        }
        add+=A[i];
        count++;
        if(sum/2<add)
            break;
    }
    printf("%d",count);
}

