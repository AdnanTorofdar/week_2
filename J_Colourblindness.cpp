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
    string s, k;
    cin >> s >> k;
    queue<char> q1, q2;
    bool flag=true;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'G')
            q1.push('B');
        else
            q1.push(s[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        if (k[i] == 'G')
            q2.push('B');
        else
            q2.push(k[i]);
    }
    while (!q1.empty())
    {
        if (q1.front() != q2.front())
        {
            flag=false;
            break;
        }
        else
        {
            q1.pop();
            q2.pop();
        }
    }
    if (flag == true)
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