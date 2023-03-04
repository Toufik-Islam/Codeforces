#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n";
#define no cout << "NO\n";

void solve()
{
    string A,B,r;
    cin >> A >> B;

    if(A[0]==B[0])
    {
        yes;
        cout << A[0] << "*\n";
        return;
    }
    if(A[A.size()-1]==B[B.size()-1])
    {
        yes;
        cout << '*' << A[A.size()-1] << "\n";
        return;
    }
    string c = "",d="";
    for(int i=0; i<B.size()-1; i++)
    {
        c += B[i];
        c += B[i+1];
        for(int j=0; j<A.size()-1; j++)
        {
            d += A[j];
            d += A[j+1];
            if(c==d)
            {
                yes;
                cout << '*' << d << "*\n";
                return;
            }
            d="";
        }
        c="";
    }
    no;
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
