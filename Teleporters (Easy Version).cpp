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
        int n,c;
        cin >> n >> c;
        vector<int> A(n+1);
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            A[i]=i+x;
        }
        sort(A.begin()+1,A.end());
        int ans=0;
        for(int i=1; i<=n && A[i]<=c; i++)
        {
            c-=A[i];
            ans++;
        }
        cout << ans << "\n";
    }

    return 0;
}
