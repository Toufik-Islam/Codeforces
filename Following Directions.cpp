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
        int n;
        cin >> n;
        string A;
        cin >> A;
        int x=0,y=0;
        bool f=false;
        for(int i=0; i<A.size(); i++)
        {
            if(A[i]=='R')
            {
                x++;
                if(x==1 && y==1)
                    f=true;
            }
            else if(A[i]=='L')
            {
                x--;
                if(x==1 && y==1)
                    f=true;
            }
            else if(A[i]=='U')
            {
                y++;
                if(x==1 && y==1)
                    f=true;
            }
            else
            {
                y--;
                if(x==1 && y==1)
                    f=true;
            }
        }
        if(f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
