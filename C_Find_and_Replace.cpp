/*
\~~~~~~~~~~~~~~~~~\
 \    TOUFIK       \
  \        ISLAM    \
   \~~~~~~~~~~~~~~~~~\
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl '\n'
#define md 1000000007
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        char q = s[i];
        if (i == 0)
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == q)
                    s[i] = '0';
            }
        }
        else
        {
            if (s[i] == '0' || s[i] == '1')
                continue;
            else
            {
                char c;
                if (s[i - 1] == '0')
                    c = '1';
                else
                    c = '0';
                for (int i = 0; i < s.size(); i++)
                {
                    if (s[i] == q)
                        s[i] = c;
                }
            }
        }
    }
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            no;
            return;
        }
    }
    yes;
}

int main()
{
    Faster;

    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
