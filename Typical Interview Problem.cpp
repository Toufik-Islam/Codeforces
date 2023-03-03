#include<bits/stdc++.h>
using namespace std;

string p="";
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (p.find(s) != std::string::npos)
    {
        std::cout << "Yes\n";
    }
    else
        cout << "No\n";

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for(int i=3;i<1000;i++)
    {
        if(i%3==0 && i%5==0)
            p+="FB";
        else if(i%3==0)
            p+="F";
        else if(i%5==0)
            p+="B";
    }
    //cout << p << '\n';
    int t=1;
    cin >> t;
    while(t--)solve();

    return 0;
}
