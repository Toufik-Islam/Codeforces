/*
\~~~~~~~~~~~~~~~~~\
 \    TOUFIK       \
  \        ISLAM    \
   \~~~~~~~~~~~~~~~~~\
*/

#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define nl '\n'
#define md 1000000007
#define ll long long
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


map<ll,bool> visited;
map<ll,vector<ll>> Adj;

vector<ll> ans;

void clr_all()
{
    visited.clear();
    ans.clear();
}

void bfs(ll head)
{
    queue<ll> A;
    A.push(head);
    visited[head] = true;
    ans.push_back(head);

    while(A.size())
    {
        ll parent = A.front();
        A.pop();
        for(int i=0; i<Adj[parent].size(); ++i)
        {
            if(parent%3==0 && !visited[parent/3] && Adj[parent/3].size()!=0)
            {
                visited[parent/3]=true;
                ans.push_back(parent/3);
                A.push(parent/3);
            }
            else if( Adj[parent*2].size()!=0 && !visited[parent*2])
            {
                visited[parent*2]=true;
                ans.push_back(parent*2);
                A.push(parent*2);
            }
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<ll> A(n);
    for(int i=0; i<n; i++)
        cin >> A[i];

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i!=j)
                Adj[A[i]].push_back(A[j]);
        }
    }

//    for(auto it: Adj)
//    {
//        cout << it.first << " -> ";
//        for(auto itt: it.second)
//            cout << itt << ' ';
//        cout << nl;
//    }
    for(auto it: Adj)
    {
        bfs(it.first);
        if(ans.size()==n)
        {
            for(auto it: ans)
                cout << it << ' ';
            return;
        }
        clr_all();
    }
}


int main()
{
    Faster;

    int t=1;
    //cin >> t;
    while(t--)solve();

    return 0;
}

