/*
\~~~~~~~~~~~~~~~~~\
 \    TOUFIK       \
  \        ISLAM    \
   \~~~~~~~~~~~~~~~~~\
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define nl '\n'
#define md 1000000007
#define Faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);

const int N = 505;
int move_x[] = {0, 0, 1, -1};
int move_y[] = {1, -1, 0, 0};

int n, m, rep;
int Adj[N][N];
pair<int, int> src;

map<pair<int, int>, pair<bool, int>> visited;
map<int, vector<pair<int, int>>, greater<int>> lvl;

bool is_safe(pair<int, int> A)
{
    if (A.first > 0 && A.second > 0 && A.first <= n && A.second <= m && Adj[A.first][A.second] == 0)
        return true;
    return false;
}

void BFS(pair<int, int> source)
{
    queue<pair<int, int>> q;
    visited[source] = {true, 0};
    lvl[0].push_back(source);
    q.push(source);

    while (q.size())
    {
        pair<int, int> head = q.front();
        q.pop();

        int x = head.first;
        int y = head.second;

        for (int i = 0; i < 4; i++)
        {
            int a = x + move_x[i];
            int b = y + move_y[i];
            if (is_safe({a, b}) && !(visited[{a, b}].first))
            {
                pair<int, int> push = {a, b};
                q.push(push);
                visited[push] = {true, visited[head].second + 1};
                lvl[visited[push].second].push_back(push);
            }
        }
    }
}

void replace_X()
{
    while (1)
    {
        for (auto it : lvl)
        {
            for (auto itt : it.second)
            {
                Adj[itt.first][itt.second] = 1;
                rep--;
                if (rep == 0)
                    return;
            }
        }
    }
}
void maze()
{
    cin >> n >> m >> rep;

    for (int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            if (s[j] == '#')
            {
                Adj[i][j + 1] = -1;
            }
            else
                src = {i, j + 1};
        }
    }
    if (rep != 0)
    {
        BFS(src);

        replace_X();
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (Adj[i][j] == -1)
                cout << '#';
            else if (Adj[i][j] == 1)
                cout << 'X';
            else
                cout << '.';
        }
        cout << nl;
    }
}

int main()
{
    Faster;

    int t = 1;
    // cin >> t;
    while (t--)
        maze();

    return 0;
}
