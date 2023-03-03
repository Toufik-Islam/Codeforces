#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string A;
    cin >> n >> A;
    if(n<4)
    {
        cout << "NO\n";
        return;
    }
    if(A[0]!='m' && A[0]!='M')
    {
        cout << "NO\n";
        return;
    }
    if(A[n-1]!='w' && A[n-1]!='W')
    {
        cout << "NO\n";
        return;
    }
    bool f=false;
    stack<char> st;
    for(int i=0; i<A.size(); i++)
    {
        if(i==0 && (A[i]=='M' || A[i]=='m'))
            st.push(A[i]);
        else if( (A[i]=='M' || A[i]=='m') && (st.top()=='M' || st.top()=='m'))
            st.push(A[i]);
        else if((A[i]=='e' || A[i]=='E') && (st.top()=='M' || st.top()=='m' || st.top()=='e' || st.top()=='E') )
            st.push(A[i]);
        else if((A[i]=='o' || A[i]=='O') && (st.top()=='O' || st.top()=='o' || st.top()=='e' || st.top()=='E') )
            st.push(A[i]);
        else if((A[i]=='w' || A[i]=='W') && (st.top()=='O' || st.top()=='o' || st.top()=='w' || st.top()=='W') )
            st.push(A[i]);
        else
        {
            f=true;
            break;
        }
    }
    if(f)
        cout << "NO\n";
    else
        cout << "YES\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t=1;
    cin >> t;
    while(t--)solve();

    return 0;
}

