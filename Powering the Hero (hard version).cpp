#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    priority_queue<int> A;
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        if(x!=0)
        {
            A.push(x);
        }
        else if(A.size()>0)
        {
            ans+=A.top();
            A.pop();
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
    cin >> t;
    while(t--)solve();

    return 0;
}



