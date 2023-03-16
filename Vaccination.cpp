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
    int n,pack,num,wait;
    cin >> n >> pack >> num >> wait;
    vector<int> A(n);
    for(int i=0; i<n; i++)
        cin >> A[i];

    int ans=0,baki,valid_time;
    for(int i=0; i<n; i++)
    {
        if(i==0 || baki<1 || valid_time<A[i] )
        {
            ans++;
            baki=pack;
            valid_time=A[i]+wait+num;
        }
        baki--;
    }
    cout << ans << nl;
}


int main()
{
    Faster;

    int t=1;
    cin >> t;
    while(t--)solve();

    return 0;
}
