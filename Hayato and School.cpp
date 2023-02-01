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
        int n;
        cin >> n;
        vector<pair<int,int>> even,odd;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin >> x;
            if(x%2==0)
            {
                even.push_back({x,i});
            }
            else
                odd.push_back({x,i});
        }
        if(odd.size()>=3)
        {
            cout << "YES\n";
            cout << odd[0].second << ' ' << odd[1].second << ' ' << odd[2].second<< '\n';
        }
        else if(odd.size()>=1 && even.size()>1)
        {
            cout << "YES\n";
            cout << odd[0].second << ' ' << even[0].second << ' ' << even[1].second<< '\n';
        }
        else
            cout << "NO\n";
    }

    return 0;
}
