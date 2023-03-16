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
    int n;
    cin >> n;
    if(n%2==0)
    {
        no;
        return;
    }
    vector<pair<int,int>> A(n);
    for(int i=0,k=n*2; i<n; i++,k--)
        A[i].second=k;
    for(int i=0,k=1; i<=n/2; i++,k+=2)
        A[i].first=k;
    for(int i=n/2+1,k=2; i<n; i++,k+=2)
        A[i].first=k;
    yes;
    for(auto it: A)
        cout << it.first << ' ' << it.second << nl;

}


int main()
{
    Faster;

    int t=1;
    cin >> t;
    while(t--)solve();

    return 0;
}

