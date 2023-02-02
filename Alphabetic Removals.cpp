#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,del;
    string A;
    cin >> n >> del >> A;

    map<char,vector<int>> mp;

    for(int i=0; i<A.size(); i++)
    {
        mp[A[i]].push_back(i);
    }


    map<int,bool> visited;
    for(char c='a'; c<='z'; c++)
    {
        for(int i=0; i< mp[c].size() && del>0; i++)
        {
            int index = mp[c][i];
            visited[index]=true;
            del--;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(!visited[i])
            cout << A[i];
    }
    return 0;
}

