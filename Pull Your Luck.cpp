/*
\~~~~~~~~~~~~~~~~~\
 \    TOUFIK       \
  \        ISLAM    \
   \~~~~~~~~~~~~~~~~~\
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl '\n'
#define md 1000000007
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve()
{
    ll n,s,mx;
    cin >> n >> s >> mx;
    ll need = (n-s)%n, sum=0,range=min(2*n,mx);

    for(int i=1; i<=range; i++)
    {
        sum+=i;
        if(sum%n==need)
        {
            yes;
            return;
        }
    }
    no;
}




int main()
{
    Faster;

    int t=1;
    cin >> t;
    while(t--)solve();

    return 0;
}
