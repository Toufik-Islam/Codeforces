#include<stdio.h>

int main ()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        char A[120];
        scanf("%s",&A);
        if(strlen(A)<=10)
            printf("%s\n",A);
        else
            printf("%c%d%c\n",A[0],(strlen(A)-2),A[strlen(A)-1]);
    }

}

