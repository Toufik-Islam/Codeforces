#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
bool is_prime(int x);
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
    int n;
    scanf("%d",&n);
    if(n%2==0)
        printf("%d %d\n",n/2,n/2);
    else if(is_prime(n))
        printf("1 %d\n",n-1);
    else
    {
        printf("3 %d\n",n-3);
    }

}
bool is_prime(int x)
{
    if(x==1)
        return false;
    if(x==2)
        return true;
    for (int i=2; i<=sqrt(x); i++)
        if(x%i==0)
            return false;
    return true;
}


