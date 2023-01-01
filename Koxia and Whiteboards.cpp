#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        vector<int> A;
        vector<int> B;
        A.resize(x);
        B.resize(y);
        long long int sum=0;
        for(int i=0;i<x;i++)
            cin>>A[i];
        for(int i=0;i<y;i++)
            cin>>B[i];

        sort(A.begin(),A.end());
        sort(B.begin(),B.end(),greater <int>());

        for(int i=0;i<y;i++)
            swap(A[i],B[i]);

        for(int i=0;i<x;i++)
            sum+=A[i];

        cout<<sum<<"\n";

    }


    return 0;
}
