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

int minn;
int maxx;
int l,t;
void solve()
{
    string A;
    cin >> A;

    int one=0;
    for(int i=0; i<l; i++)
    {
        if(A[i]=='1')
            one++;
    }

    int double_win_double_light=0;
    for(int i=0; i<l-1; i++)
    {
        if(A[i]=='1' && A[i+1]=='1')
        {
            double_win_double_light++;
            i++;
        }
    }
    double_win_double_light = min(double_win_double_light,(l/4));

    int double_win_single_light=0;
    for(int i=0; i<l-1; i++)
    {
        if( !(A[i]=='1' && A[i+1]=='1') )
        {
            double_win_single_light++;
            i++;
        }
    }
    double_win_single_light = min(double_win_single_light,(l/4));

    minn += double_win_double_light + (one - double_win_double_light*2);
    maxx += (one - ( (l/4) - double_win_single_light));
}


int main()
{
    Faster;

    cin >> t >> l;
    while(t--)solve();

    cout << minn << ' ' << maxx << nl;
    return 0;
}

