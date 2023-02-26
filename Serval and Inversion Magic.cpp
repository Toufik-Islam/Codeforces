#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s)
{
    for(int i=0,j=s.size()-1; i<j; i++,j--)
    {
        if(s[i]!=s[j])
            return false;
    }
    return true;
}

bool possible(string s)
{
    bool problem = false;
    bool solved = false;
    for(int i=0,j=s.size()-1; i<j; i++,j--)
    {
        if(problem)
        {
            if(solved)
            {
                if(s[i]!=s[j])
                {
                    return false;
                }
            }
            else
            {
                if(s[i]==s[j])
                    solved = true;
            }
        }
        else
        {
            if(s[i]!=s[j])
            {
                problem = true;
            }
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if(palindrome(s))
        {
            cout << "Yes\n";
            continue;
        }
        if(possible(s))
        {
            cout << "Yes\n";
            continue;
        }

        reverse(s.begin(),s.end());
        if(possible(s))
        {
            cout << "Yes\n";
            continue;
        }
        cout << "No\n";
    }
    return 0;
}
