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
        int a,b,x,y,r;
        cin>>a>>b>>x>>y>>r;

        if((a<=x+r && b<=y+r) || (x-r<=1 && y-r<=1) || (a<=x+r && x-r<=1) || (b<=y+r && y-r<=1) )
            cout << "-1\n";
        else
            cout << a+b-2 << "\n";
    }
    return 0;
}

