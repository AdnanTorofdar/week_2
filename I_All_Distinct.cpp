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
    cin >> n;
    m = n;

    set<ll> s;

    while (m--)
    {
        ll x;
        cin >> x;

        s.insert(x);
    }

    if ((n - s.size()) % 2 == 0)
        cout << s.size();
    else
        cout << s.size() - 1;

    cout << endl;
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