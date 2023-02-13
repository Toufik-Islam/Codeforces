#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    vector<int> A(n+1);
    for(int i=1;i<=n;i++)
        cin >> A[i];

    if(count(A.begin(),A.end(),1)==n)
    {
        cout << n-1;
        return 0;
    }
    int ans=0,one=0;
    for(int i=1;i<=n;i++)
    {
        one = count(A.begin(),A.begin()+i,1);
        for(int j=i;j<=n;j++)
        {
            int c =count(A.begin()+j+1,A.end(),1);
            int x = count(A.begin()+i,A.begin()+j+1,0)+one+c;
            int y = count(A.begin()+i,A.begin()+j+1,1)+one+c;
            ans = max({ans,x,y});
        }
    }
    cout << ans;
    return 0;
}
