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
  ll n, a = 0;
  cin >> n;
  vector<pair<ll, ll>> c(n);
  set<pair<ll, ll>> s;
  rep(i, n)
  {
    ll x, y;
    cin >> x >> y;
    c[i] = {x, y};
    s.insert({x, y});
  }
  sort(c.begin(), c.end());
  rep(i, n) for (ll j = i + 1; j < n; j++)
  {
    ll dx = c[i].first - c[j].first, dy = c[i].second - c[j].second;
    pair<ll, ll> q, r;
    if (dy > 0)
    {
      q = {c[i].first + abs(dy), c[i].second - dx};
      r = {c[j].first + abs(dy), c[j].second - dx};
    }
    else
    {
      q = {c[i].first + abs(dy), c[i].second + dx};
      r = {c[j].first + abs(dy), c[j].second + dx};
    }
    if (s.count(q) && s.count(r))
      a = max(a, dx * dx + dy * dy);
  }
  cout << a << endl;
}