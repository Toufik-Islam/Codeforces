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
        vector<int> A;
        A.push_back(0);
        A.resize(n+1);
        for(int i=1; i<=n; i++)
            cin >> A[i];

        A.push_back(1440);

        bool f= false;
        int cnt=0;
        for(int i=1; i<n+2; i++)
        {
            if(A[i]-A[i-1]>=120)
                cnt++;
            if(A[i]-A[i-1]>=240)
                f=true;
            if(cnt==2)
                break;
        }
        if(f || cnt==2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

