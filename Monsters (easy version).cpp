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
        cin>> n;
        vector<int> A(n);
        for(int i=0; i<n; i++)
            cin>>A[i];

        sort(A.begin(),A.end());
        long long ans=0;
        int idx=0;

        for(int i=0;i<n;i++)
        {
            if(A[i]==idx)
                continue;
            if(A[i]==idx+1)
            {
                idx++;
                continue;
            }
            else
            {
                idx++;
                ans+=A[i]-idx;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}


