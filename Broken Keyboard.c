#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>

void solve_it();

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        solve_it();
    }


    return 0;
}

void solve_it()
{
    int n,flag=0;
    scanf("%d",&n);
    int mod=n%3;
    char str[n+1];
    scanf("%s",str);
    if(mod==0)
    {
        for(int i=1,j=2; i<n-1; i+=3,j+=3)
        {

            if(str[i]==str[j])
                flag=1;
            else
            {
                flag=0;
                break;
            }

        }
        flag==1?printf("YES\n"):printf("NO\n");
    }
    else if(mod==1)
    {
        for(int i=1,j=2; i<n-2; i+=3,j+=3)
        {

            if(str[i]==str[j])
                flag=1;
            else
            {
                flag=0;
                break;
            }

        }
        flag==1?printf("YES\n"):printf("NO\n");
    }
    else
        printf("NO\n");

}

