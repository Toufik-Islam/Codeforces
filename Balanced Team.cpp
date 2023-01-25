#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int>A(n);
    for(int i=0; i<n; i++)
        cin >> A[i];

    sort(A.begin(),A.end());

    int ans=0,cnt=0;
    for(int i=0,j=0; i<n && j<n;)
    {
        if(abs(A[i]-A[j])<=5)
        {
            j++;
            cnt++;
        }
        else
        {
            cnt--;
            i++;
        }
        ans=max(cnt,ans);
    }
    cout << ans;
    return 0;
}

