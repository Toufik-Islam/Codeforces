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

int A[3];
map<int, int> mp;
int dp(int n)
{
    if(mp[n]!=0)
        return mp[n];
    if(n==0)
        return 0;

    int ans = INT_MIN;
    for(int i=0;i<3;i++)
    {
        if(n-A[i]>=0)
            ans = max(ans,1+dp(n-A[i]));
    }
    mp[n]=ans;
    return ans;
}


int main()
{
    Faster;

    int get;
    cin >> get;
    for(int i=0;i<3;i++)
        cin >> A[i];

    sort(A,A+3);
    cout << dp(get) << nl;
    return 0;
}

