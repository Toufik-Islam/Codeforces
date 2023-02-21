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
        int n;
        cin >> n;
        bool ans = false;
        while(n>0)
        {
            if(n%11==0 || n%111==0)
            {
                ans =true;
                break;
            }
            n-=111;
        }
        if(ans)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
