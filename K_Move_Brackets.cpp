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
    int x;
    cin >> x;
    string s;
    cin >> s;

    int c1 = 0, c2 = 0, sol = 0;
    for (int i = 0; i < x; i++)
    {
        if (s[i] == '(')
        {
            c1++;
        }
        else
        {
            if (c1 > 0)
            {
                c1--;
            }
            else
            {
                sol++;
            }
        }
    }
    cout << sol << '\n';
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