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
    vector<int> A(n);
    for (int i = 0; i < n; i++)
        cin >> A[i];

    ll sum = 1;
    sort(A.begin(), A.end());
    if (A[0] != 1)
    {
        no;
        return;
    }
    for (int i = 1; i < n; i++)
    {
        // cout << sum;
        if (sum < A[i])
        {
            no;
            return;
        }
        sum += A[i];
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
