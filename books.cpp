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
    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    deque<int> dq;
    int ans = 0,mx=0;
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >>x;
        sum+=x;
        dq.push_back(x);

        while(!dq.empty() && sum>m)
        {
            sum-= dq.front();
            dq.pop_front();
        }
        mx = dq.size();
        ans = max(ans, mx);
    }
    cout << ans << nl;
}


int main()
{
    Faster;

    int t=1;
    //cin >> t;
    while(t--)solve();

    return 0;
}

