#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'
#define fast                    \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);                   \
  cout.tie(0);
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define mod 1000000007
void me()
{
  int n,m ;
  cin >> n >> m;

  int cnt = 0;
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= n; j++)
    {
      if ((m - i - j) >= 0 && (m - i - j) <= n)
      {
        cnt++;
      }
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