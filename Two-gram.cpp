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
    string A;
    cin >> n >> A;
    map<string,int> mp;
    for(int i=0; i<A.size()-1; ++i)
    {
        string s= "";
        s+= A[i];
        s+= A[i+1];
        mp[s]++;
    }
    string ans="";
    int mx=-1;
    for(auto it: mp)
    {
        if(it.second>mx)
        {
            mx = it.second;
            ans = it.first;
        }
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

