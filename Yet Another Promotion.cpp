#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        unsigned long long a,b,n,m,ans;
        cin >> a >> b >> n >> m;

        ans = min(a*n,b*n);
        long long x = n/(m+1);
        long long rem = n%(m+1);

        if(b*(m+1)<=m*a)
        {
            ans = min(ans,b*n);
        }
        else
        {
            ans = min(ans, x*a*m + (n-x*(m+1))*min(a,b));
        }

        cout << ans << '\n';
    }

    return 0;
}
