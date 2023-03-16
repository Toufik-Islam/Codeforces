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
    int n,k;
    cin >> n >> k;
    map<int,int> A;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        A[x]++;
    }
    if(k==0)
    {
        auto itt = A.begin();
        if(itt->first-1>0)
            cout << itt->first-1 << nl;
        else
            cout << -1 << nl;
        return;
    }
    int prv=0;
    for(auto it: A)
    {
        if(it.second+prv==k)
        {
            cout << it.first << nl;
            return;
        }
        prv+=it.second;
    }
    cout << -1 << nl;
}


int main()
{
    Faster;

    int t=1;
    //cin >> t;
    while(t--)solve();

    return 0;
}

