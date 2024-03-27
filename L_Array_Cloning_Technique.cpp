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
void _The_eRRoR_()
{
    int n;
    cin >> n;
    vector<int> vt(n);
    map<int, int> same;
    int cnt = 0, rem = 0, high = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> vt[i];
        same[vt[i]]++;
    }
    for (auto it : same)
    {
        high = max(it.second, high);
    }
    // cout<<high;
    while (high < n)
    {
        cnt++;
        if (high * 2 < n)
        {
            cnt += high;
            high *= 2;
        }
        else
        {
            cnt += (n - high);
            high += (n - high);
        }
    }
    cout << cnt << endl;
}
int main()
{
    fast;
    ll test_case = 1;
    cin >> test_case;
    while (test_case--)
        _The_eRRoR_();
    return 0;
}