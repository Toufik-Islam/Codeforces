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
        cin>> n;
        int aw=0,ab=0,bw=0,bb=0;
        int f1=1,f2=0;
        for(int i=1; aw+bw+ab+bb+i<n; i++)
        {
            if(f1<2)
            {
                if(i%2==0)
                {
                    aw+=i/2;
                    ab+=i/2;
                }
                else
                {
                    aw+=i/2+1;
                    ab+=i/2;
                }
                f1++;
                if(f1==2)
                    f2=0;
            }
            else if(f2<2)
            {
                if(i%2==0)
                {
                    bw+=i/2;
                    bb+=i/2;
                }
                else
                {
                    bb+=i/2+1;
                    bw+=i/2;
                }
                f2++;
                if(f2==2)
                    f1=0;
            }
        }
        if(aw+bw+ab+bb!=n)
        {
            int x = (n-(aw+bw+ab+bb));
            if(f1<2)
            {
                if(x%2==0)
                {
                    aw+=x/2;
                    ab+=x/2;
                }
                else
                {
                    aw+=x/2+1;
                    ab+=x/2;
                }
            }
            else
            {
                if(x%2==0)
                {
                    bw+=x/2;
                    bb+=x/2;
                }
                else
                {
                    bb+=x/2+1;
                    bw+=x/2;
                }
            }
        }
        cout << aw << ' ' << ab << ' ' << bw << ' ' << bb << "\n";
    }

    return 0;
}
