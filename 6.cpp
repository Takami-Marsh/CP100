#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<ld> vd;
typedef vector<vd> vvd;
typedef vector<string> vs;

#define rep(i, n) for (ll i = 0; i < n; i++)
const ll INF = 1 << 29;

int main()
{
  ll n, ans = 0;
  string s;
  cin >> n >> s;
  for (ll i = 0; i < 1000; i++)
  {
    string tmp = ((i < 10) ? "00" : (i < 100) ? "0" : "") + to_string(i);
    ll count = 0;
    for (ll j = 0; j < s.size(); j++)
    {
      count += (tmp[count] == s[j]) ? 1 : 0;
      if (count == 3) break;
    }
    ans += (count == 3) ? 1 : 0;
  }
  cout << ans << endl;
}