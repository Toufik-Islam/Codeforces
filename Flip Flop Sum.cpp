#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n,sum=0;
        cin >> n;
        vector<int> A(n);
        for(int i=0; i<n; i++)
        {
            cin >> A[i];
            sum+=A[i];
        }

        bool f1=false,f2=false;
        if(A[0]==-1)
            f2=true;
        for(int i=1; i<n; i++)
        {
            if(A[i]==-1 && A[i-1]==-1)
            {
                f1=true;
                break;
            }
            else if(A[i]==-1)
                f2=true;
        }
        if(f1)
            cout << sum+4 << "\n";
        else if(f2)
            cout << sum << "\n";
        else
            cout << sum-4 << "\n";
    }
    return 0;
}
