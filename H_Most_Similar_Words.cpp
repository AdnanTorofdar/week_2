#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
void me()
{
    int n, m;
    cin >> n >> m;
    string s[n];
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = 0;
            for (int k = 0; k < m; k++)
            {
                temp += abs(s[i][k] - s[j][k]);
            }
            ans = min(ans, temp);
        }
    }
    cout << ans << endl;
}
int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
        me();
    return 0;
}