#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n,q;
        cin >> n >> q;
        vector<int> A(n+1);
        for(int i=1; i<=n; i++)
            cin >> A[i];

        sort(A.begin()+1,A.end(),greater<int>());

        for(int i=1; i<=n; i++)
        {
            A[i]+=A[i-1];
        }

        while(q--)
        {
            int k;
            cin >> k;
            auto it = lower_bound(A.begin(),A.end(),k);

            if(it != A.end())
            {
                int idx = it - A.begin();
                cout << idx << '\n';
            }
            else
                cout << "-1\n";
        }
    }
    return 0;
}

