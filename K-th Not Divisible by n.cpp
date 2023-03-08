#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl '\n'

void solve()
{
    ll n,k;
    cin >> n >> k;
    ll ans = k;
    while(k>=n)
    {
        ans+= k/n;
        k = k/n + k%n;
    }
    cout << ans << nl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    cin >> t;
    while(t--)solve();

    return 0;
}

