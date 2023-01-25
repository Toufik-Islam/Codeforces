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
        int n;
        cin >> n;
        vector<pair<int,int>> A(n);
        for(int i=0;i<n;i++)
            cin >> A[i].second;
        for(int i=0;i<n;i++)
            cin >> A[i].first;

        sort(A.begin(),A.end());

        long long ans=0;
        long long extra=0;

        for(int i=0;i<n;i++)
        {
            ans+=A[i].second+extra;
            extra=A[i].first;
        }
        cout << ans << '\n';
    }


    return 0;
}
