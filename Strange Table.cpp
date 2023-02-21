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
        long long n,m,k,ans=1;
        cin >> n >> m >> k;
        ans = ((k-1)%n)*m+((k-1)/n)+1;
        cout << ans << '\n';
    }

    return 0;
}


