#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >>n;
    vector<int> A(n);
    for(int i=0;i<n;i++)
    {
        cin >> A[i];
        if(A[i]==1)
            A[i]+=1;
    }
    for(int i=0;i<n-1;i++)
    {
        if(A[i+1]%A[i]==0)
            A[i+1]+=1;
    }
    for(auto it: A)
        cout << it << ' ';
    cout << '\n';
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    cin >> t;
    while(t--)        solve();

    return 0;
}
