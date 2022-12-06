

#include<stdio.h>

int main ()
{
    long long int m,n,a;
    scanf("%lld %lld %lld",&m,&n,&a);

    m= m/a + (m%a!=0);
    n= n/a + (n%a!=0);

    printf("%lld",m*n);

}

