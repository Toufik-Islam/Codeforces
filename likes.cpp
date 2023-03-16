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
    int pos=0,neg=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(x>0)
            pos++;
        else
            neg++;
    }
    int p=1;
    for(int i=1; i<=pos; i++,p++)
        cout << p << ' ';
    p-=2;
    for(int i=1; i<=neg; i++,p--)
        cout << p << ' ';

    cout << nl;

    for(int i=1; i<=neg; i++)
        cout << 1 << ' ' << 0 << ' ';

    for(int i=1; i<=n-neg*2; i++)
        cout << i << ' ';
    cout << nl;
}


int main()
{
    Faster;

    int t=1;
    cin >> t;
    while(t--)solve();

    return 0;
}

