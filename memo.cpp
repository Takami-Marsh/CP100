#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef vector<ll> vl;
typedef vector<string> vs;

int main()
{
  ll a, b;
  string s;
  // setは値を重複しないよ
  set<ll> S;

  // 小数点以下桁数指定 (科学的四捨五入**普通のと違うっぽい)
  cout << fixed << setprecision(3);
  // 全体桁数指定 (四捨五入)
  cout << setprecision(3);

  // 四捨五入 (整数)
  round(a);
  // 四捨五入 (任意 下は1/100まで出力)
  round(a * 100) / 100;

  // 文字列に含まれるか判定
  if (s.find('a') != string::npos)
  {
    // 含まれる場合
  }
  else
  {
    // 含まれない場合
  }
  // set検索
  S.count(10);
  // 部分文字列 (開始位置, 文字数)
  string substring = s.substr(0, 2);

  // 大文字, 小文字確認
  isupper(s[0]);
  islower(s[0]);
  // 大文字, 小文字変換
  (char)toupper(s[0]);
  (char)tolower(s[0]);

  // 配列交換
  swap(s[0], s[1]);

  // 進数変換
  stringstream ss;
  ss << hex << 99;
  ss << oct << 99;
  ss << dec << 99;
  // 大文字
  ss << hex << uppercase << 99;
  // 小文字
  ss << hex << nouppercase << 99;
  ss << bitset<8>(99);
  s = ss.str();

  // 数値から文字列へ
  s = to_string(99);

  // bit演算
  cout << (a | b); // OR

  // 部分文字列 (開始位置, 長さ)
  s.substr(0, 3);

  // 昇順ソート
  sort(s.begin(), s.end());
  // 降順ソート
  sort(s.rbegin(), s.rend());

  // 文字列とcharの連結
  s += 'a';

  // ゼロ埋め setfill: 埋める文字, right: 入力値をleftかrightのどっちに表示するか, setw: 桁数
  cout << setfill('0') << right << setw(4) << 12;

  // すべての順列(重複なし)を生成する
  sort(s.begin(), s.end());
  do
  {
    // 処理
  } while (next_permutation(s.begin(), s.end()));

  // 組み合わせ数 2つ
  // N*(N-1)/2
}

/*
・失敗リスト
cin忘れ
配列指定の1か0か

*/