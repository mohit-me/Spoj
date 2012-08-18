#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main () {

  int runs;
  cin >> runs;

	while (runs--) {

		int n;
		string s;
		cin >> n >> s;

		vector<int> cnt(128,0);
		for (int i=0; i<n; i++) 
			cnt[s[i]]++;

		int res = 0;
		int num_used = 0;
		vector<bool> used(128,false);
		
		for (int i=n-1; i>=0; i--) {
			if (!used[s[i]]) {
				res += (num_used-(n-1-i))*cnt[s[i]];
				num_used += cnt[s[i]];
				used[s[i]] = true;
			}
		}
		
		cout << 5 * res << endl;
  }
	
  return 0;   
}
