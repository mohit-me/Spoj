#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

#define MAXN 510

using namespace std;

vector <string> ans[MAXN];

int cal(string s, int l)
{
 int ans[MAXN];
 vector <int> a;
 memset(ans, 0, sizeof (ans));
 for (int i = l - 1; i >= 0; --i)
  a.push_back(s.at(i) - '0');
 for (int i = 0; i < l; ++i)
  for (int j = 0; j < l - i; ++j)
   ans[i + j] += a[i] * a[j];
 for (int i = 0; i < l; ++i)
  ans[i + 1] += ans[i] / 10;
 return (ans[l - 1] / 10) % 10;
}

void pre()
{
 ans[1].push_back("0");
 ans[1].push_back("1");
 ans[1].push_back("5");
 ans[1].push_back("6");
 ans[2].push_back("25");
 ans[2].push_back("76");
 for (int t = 3; t <= 500; ++t)
 {
  for (int i = 0; i < ans[t - 1].size(); ++i)
  {
   int aa = cal(ans[t - 1][i], t - 1);
   for (int j = 0; j < 10; ++j)
   {
    string tmp = "";
    char ch = '0' + j;
    tmp += ch;
    tmp += ans[t - 1][i];
    int tot = aa;
    for (int k = 0; k < t; ++k)
     tot += (tmp[k] - '0') * (tmp[t - 1 - k] - '0');
    if (tot % 10 == j) ans[t].push_back(tmp);
   }
  }
  if (ans[t].size() == 0) break;
  sort(ans[t].begin(), ans[t].end());
 }
}

void init()
{
 int T;
 scanf("%d", &T);
 for (int i = 1; i <= T; ++i)
 {
  int n;
  scanf("%d", &n);
  printf("Case #%d:", i);
  if (ans[n].size() == 0) printf("Impossible");
  else
  {
   for (int j = 0; j < ans[n].size(); ++j)
   {
    if (ans[n][j].at(0) != '0' || n == 1) cout << " " << ans[n][j];
   }
  }
  puts("");
 }
}

int main()
{
 pre();
 init();
 return 0;
}
