#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    string A;
    cin >> A;
    stack<char> st_b1,st_b2;
    for(int i=0;i<A.size();i++)
    {
        char c = A[i];
        if(c=='(')
                st_b1.push(c);
        else if(!st_b1.empty() && c==')')
            st_b1.pop();
        else
            st_b2.push(c);
    }
    if((st_b1.size()==0 && st_b2.size()==0) ||(st_b1.size()==1 && st_b2.size()==1))
        cout << "Yes\n";
    else
        cout << "No\n";


    return 0;
}

