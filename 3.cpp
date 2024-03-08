#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll c = 0;
  string s;
  cin >> s;
  for (ll i = 0; i < s.size(); i++)
    for (ll j = i; j < s.size(); j++)
    {
      bool flag = true;
      for (ll k = i; k <= j; k++)
        if (s[k] != 'A' && s[k] != 'G' && s[k] != 'C' && s[k] != 'T')
        {
          flag = false;
          break;
        }
      c = (flag) ? max(j - i + 1, c) : c;
    }
  cout << c << endl;
}