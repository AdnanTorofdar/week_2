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
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    ll cnt = 0;
    map<char, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        // cout << it->first << " " << it->second << endl;
        if (it->second % 2 != 0)
            cnt++;
    }
    if (cnt < 1)
        cnt = 0;
    else
        cnt--;
    if (m >= cnt && cnt <= n)
        yes;
    else
        no;
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