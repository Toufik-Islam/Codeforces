#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s[0]+s[1]+s[2]==s[3]+s[4]+s[5])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

