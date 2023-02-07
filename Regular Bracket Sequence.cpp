#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    stack<char> A;
    int ans=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='(')
            A.push(s[i]);
        else if(!A.empty() && A.top()=='(')
        {
            A.pop();
            ans++;
        }
    }
    cout << ans*2;
    return 0;
}
