#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,k,ans=0;
    cin >> n >> k;
    vector<int> A(n);
    for(int i =0;i<n;i++)
        cin >> A[i];

    sort(A.begin(),A.end());

    for(int i=0,j=n-1;i<=j;)
    {
        int a=k/A[j];
        if(a<=j-i)
        {
            ans++;
            j--;
            i+=a;
        }
        else
            break;
    }
    cout << ans;

    return 0;
}


