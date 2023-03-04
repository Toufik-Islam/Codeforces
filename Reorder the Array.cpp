#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int ans=0;
    vector<int> A(n);
    priority_queue<int> pq;
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
        pq.push(A[i]);
    }
    sort(A.rbegin(),A.rend());

    for(int i=0; i<n; i++)
    {
        if(A[i]<pq.top())
        {
            ans++;
            pq.pop();
        }
    }
    cout << ans << '\n';
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    //cin >> t;
    while(t--)solve();

    return 0;
}



