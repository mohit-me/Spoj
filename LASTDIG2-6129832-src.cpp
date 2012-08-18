#include <iostream>
#include <string>
using namespace std;		
int main(int argc, const char *argv[]) {
int zad[][4] ={{0, 0, 0, 0}, {1, 1, 1, 1},{2, 4, 8, 6}, {3, 9, 7, 1},{4, 6, 4, 6}, {5, 5, 5, 5},
		{6, 6, 6, 6}, {7, 9, 3, 1},
		{8, 4, 2, 6}, {9, 1, 9, 1}};
		int t;
		cin >> t;
		for(int i=0; i<t; i++) {
		string a;
		long long b;
		cin >> a >> b;
		if(b==0) {
		cout << 1 << endl;
		} else {
		int aa = a[a.size()-1] - '0';
		b %= 4;
		b = (b == 0) ? 3 : b-1;
		cout << zad[aa][b] << endl;
		}
		}
		return 0;
		}

