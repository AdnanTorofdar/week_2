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
    string s, t;
    cin >> s >> t;
    ll cnt=0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
        {
            cnt++;
        }
        else
        {
            continue;
        }
    }
    cout << cnt << endl;
}
int main()
{
    fast;
    ll t = 1;
    // cin >> t;
    while (t--)
        me();
    return 0;
}