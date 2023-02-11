#include <bits/stdc++.h>
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
        int n, c;
        cin >> n >> c;
        map<int,int> A;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >>  x;
            A[x]++;
        }
        int ans = 0;
        for(auto it:A)
        {
            ans+=min(it.second,c);
        }
        cout << ans << '\n';
    }

    return 0;
}
