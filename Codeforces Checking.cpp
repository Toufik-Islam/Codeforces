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
        char c;
        cin >> c;
        if(c=='c' ||c=='o'||c=='d'||c=='e'||c=='f'||c=='o'||c=='r'||c=='c'||c=='e'||c=='s')
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
