#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    map<string,int> reg;
    while(t--)
    {
        string s;
        cin >> s;
        if(reg[s]==0)
            cout << "OK\n";
        else
            cout << s << reg[s] << "\n";
        reg[s]++;
    }
    return 0;
}
