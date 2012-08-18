#include <iostream>
#include <string>

using namespace std;

int main () {

  int runs;
  cin>>runs;

  while (runs--) {

		int a,b;
		char c;
		cin >> a >> c >> b;

		while (a>1 || b>1) {
			if (a<b) {
				cout << "L";
				b -= a;
			}
			else {
				cout << "R";
				a -= b;
			}
			swap(a,b);
		}

		cout << endl;
  }

  return 0;
}

