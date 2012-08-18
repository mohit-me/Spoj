#include <iostream>
#include <vector>
using namespace std;
    int main() {
       string str;
       char c;
       vector<int> a;
       for (int j = 0; j < 5; ++j) {
             cin >> str ;

          for (int i = 0; i < str.length(); ++i) {
             if (str[i] == 'F' && str[i + 1] == 'B' && str[i + 2] == 'I') {
                a.push_back(j + 1);
             }
          }
          cout<<endl;
       }
       if (a.size() == 0) {
          cout << "HE GOT AWAY!" << endl;
       } else {
          for (int i = 0; i < a.size(); ++i) {
             cout << a[i] << " ";
          }
       }
       return 0;
    }

