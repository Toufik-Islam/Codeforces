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
    int num;
    cin >> num;
    int p=INT_MIN,n = INT_MIN;
    ll sum = 0;
    bool pos =false;
    bool fp =true;
    bool fn =true;

    for(int i=0; i<num; i++)
    {
        int x;
        cin >> x;
        if(x<0)
            fp = false;
        else
            fn = false;
        if(i==0 && x>0)
            pos = true;
        if(pos)
        {

            if(x<0)
            {
                pos = false;
                sum+=p;

                n = x;
            }
            else
                p = max(p,x);
        }
        else
        {

            if(x>0)
            {
                pos = true;
                sum+=n;

                p = x;
            }
            else
                n = max(n,x);
        }
    }

    if(pos)
        sum+=p;
    else
        sum+=n;
    if(fp)
        cout << p << nl;
    else if(fn)
        cout << n << nl;
    else
        cout << sum << nl;
}


int main()
{
    Faster;

    int t=1;
    cin >> t;
    while(t--)solve();

    return 0;
}

