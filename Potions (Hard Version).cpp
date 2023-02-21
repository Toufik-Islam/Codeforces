#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    long long sum=0;
    priority_queue<long long,vector<long long>, greater<long long>> pq;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >>x;
        pq.push(x);
        sum+=x;
        if(sum<0)
        {
            sum-=pq.top();
            pq.pop();
        }
    }
    cout << pq.size();
    return 0;
}


