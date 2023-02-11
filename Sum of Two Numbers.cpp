#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >>t;
    while(t--)
    {
        string s;
        cin >> s;

        string a="",b="";
        bool f= true;
        for(int i=0; i<s.size(); i++)
        {
            if(f)
            {
                char p = ((s[i] - '0') / 2) + '0';
                a+=p;
                char q = s[i] - p + '0';
                b+=q;
                if(p<q)
                    f = !f;
            }
            else
            {
                char p = ((s[i] - '0') / 2) + '0';
                b+=p;
                char q = s[i] - p + '0';
                a+=q;
                if(p!=q)
                    f = !f;
            }
        }
        int x = stoi(a);
        int y = stoi(b);

        cout << x << ' ' << y << '\n';
    }
    return 0;
}
