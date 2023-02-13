
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d;
        cin >> a>>b>>c>>d;

        if(a==0)
        {
            cout << "1\n";
            continue;
        }
        int ans = min(a+c,a+b)*2+1;
        int total = a+b+c+d;
        cout << min(total,ans) << '\n';

    }
    return 0;
}

