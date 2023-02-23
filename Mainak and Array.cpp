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
        int n,maxx=INT_MIN,minn=INT_MAX,ans=-1;
        cin>>n;
        int A[n];
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
            minn=min(minn,A[i]);
            maxx=max(maxx,A[i]);
            if(i)
                ans=max(ans,A[i-1]-A[i]);
        }
        ans = max(ans,A[n-1]-A[0]);

        int dif_min = maxx - A[0];
        int dif_max = A[n-1]-minn;

        cout << max({dif_max,dif_min,ans}) << '\n';
    }
    return 0;
}

