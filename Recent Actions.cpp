#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,q;
    cin >> n >> q;
    vector<int> A(n,-1);
    int del = n-1;
    map<int, bool> mp;
    for(int i=1; i<=q; i++)
    {
        int x;
        cin >> x;
        if(mp[x]==false && del>=0)
        {
            A[del]= i;
            del--;
            mp[x]=true;
        }
    }
    for(auto it: A)
        cout << it << ' ';
    cout << '\n';
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

