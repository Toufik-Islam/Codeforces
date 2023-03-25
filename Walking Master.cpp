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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    if(d<b)
    {
        cout << -1 << nl;
        return;
    }
    int p = d-b;
    if(p+a>=c)
    {
        cout << p + abs(c-(a+p)) << nl;
    }
    else
        cout << -1 << nl;

}


int main()
{
    Faster;

    int t=1;
    cin >> t;
    while(t--)solve();

    return 0;
}
