#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>> n;
        if(n==3)
            cout << "NO\n";
        else if(n%2==0)
        {
            cout << "YES\n";
            for(int i=0;i<n/2;i++)
                cout << "1 -1 ";
            cout << "\n";
        }
        else
        {
            cout << "YES\n";
            for(int i=0;i<n/2;i++)
                cout << n/2-1 << " " << -n/2 << " ";
            cout << n/2-1 << "\n";
        }
    }

    return 0;
}
