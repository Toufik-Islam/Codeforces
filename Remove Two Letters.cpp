#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string A;
    cin >> n >> A;
    int ans=1;
    for(int i=1;i<n-1;i++)
    {
        if(A[i-1]!=A[i+1])
            ans++;
    }
    cout << ans << '\n';
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



