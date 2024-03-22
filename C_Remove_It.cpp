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
    ll n;
    cin >> n;
    list<ll> l;
    ll p;
    cin >> p;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        l.push_back(x);
    }
    l.remove(p);
    for (ll k : l)
    {
        cout << k << " ";
    }
    cout << endl;
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