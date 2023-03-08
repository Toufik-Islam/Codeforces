#include <bits/stdc++.h>
using namespace std;

#define yes cout<<"YES\n"
#define no cout<<"NO\n"

void solve()
{
    int n;
    cin >>n;
    string A="";
    bool check = false,palindrome = false;
    for(int i=0;i<2*n-2;i++)
    {
        string c;
        cin >> c;
        if(check)
        {
            reverse(c.begin(),c.end());
            if(c==A)
                palindrome = true;
        }

        else if(!check && c.size()==n-1)
        {
            A=c;
            check = true;
        }

    }
    if(palindrome) yes;
    else no;
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
