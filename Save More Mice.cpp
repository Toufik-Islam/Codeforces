#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int k,n,ans=0;
        cin >> k >> n;

        vector<int> A(n);
        for(int i=0; i<n; i++)
            cin >> A[i];
        sort(A.begin(),A.end());

        int mv=0;
        for(int i=A.size()-1; i>=0;i--)
        {
            mv += k-A[i];
            auto it = upper_bound(A.begin(),A.end(),mv);
            ans++;
            A.pop_back();
            if(it>=A.begin()+i)
                break;

        }
        cout << ans << '\n';
    }
    return 0;
}
