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
        int a,b;
        cin >> a >> b;
        string A,B;
        cin >> A >> B;

        int x=0,y=0;
        for(int i=1; i<a; i++)
        {
            if(A[i]==A[i-1])
                x++;
        }
        for(int i=1; i<b; i++)
        {
            if(B[i]==B[i-1])
                y++;
        }
        if((x==0 && y==0) ||(x==1 && y==0 && A[a-1]!=B[b-1]) || (x==0 && y==1 && A[a-1]!=B[b-1]))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
