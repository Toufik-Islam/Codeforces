/*
\~~~~~~~~~~~~~~~~~\
 \    TOUFIK       \
  \        ISLAM    \
   \~~~~~~~~~~~~~~~~~\
*/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl '\n'
#define md 1000000007
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve()
{
    int n,ans=0;
    cin >> n;
    vector<int> A(n);
    for(int i=0; i<n; i++)
        cin >> A[i];
    int m;
    cin >> m;
    vector<int> B(m);
    for(int i=0; i<m; i++)
        cin >> B[i];

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(abs(A[i]-B[j])<2)
        {
            ans++;
            i++;
            j++;
        }
        else if(A[i]<B[j])
            i++;
        else
            j++;
    }
    cout << ans << nl;
}


int main()
{
    Faster;

    int t=1;
    //cin >> t;
    while(t--)solve();

    return 0;
}

