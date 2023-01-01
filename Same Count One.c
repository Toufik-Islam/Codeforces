#include<stdio.h>

int main(void)
{
    int m,n,total_one=0,row_one;
    scanf("%d%d",&m,&n);
    int A[m][n];
    int row[m];
    for(int i=0;i<m;i++)
    {
        row_one=0;
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
            if(A[i][j]==1)
            {
                total_one++;    row_one++;
            }
        }
        row[i]=row_one;
    }

    if(total_one%m!=0)
    {
        printf("-1\n");
    }
    else
    {
        total_one/=m;
        for(int i=0;i<m;i++)
        {
            if(total_one<row[i])
            {
                for(int j=0;j<n;j++)
                {
                    if(A[i][j]==0)
                        printf("%d ", i);
                }
            }
        }

    }


    return 0;
}
