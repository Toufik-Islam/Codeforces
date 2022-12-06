#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int A[n];
        for(int i=0; i<n-1; i++)
            printf("%d ",i+2);

        printf("1\n");
    }
    return 0;
}
