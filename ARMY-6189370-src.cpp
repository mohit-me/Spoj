#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <fstream>
#include <math.h>
#include <cmath>
#include <algorithm>
#include <functional>
#include <bitset>
#include <map>
#include <set>
#include <iomanip>
#include <string>
#include <string.h>
#include <ctype.h>
#include <utility>
#include <complex>
#include <numeric>
#include <cctype>
#include <list>
#include <cassert>

#define forever while(true)
#define ignore cin.ignore(0x7fffffff, '\n')
#define INF 0x7fffffff
#define all(i) (i).begin(), (i).end()
#define pb push_back
#define mp make_pair
#define forn(i,s,st,n) for(int (i)=s; (i)<n; (i)+=st)
#define fornd(i,s,st,n) for(int (i)=s; (i)>=n; (i)-=st)
#define MOD 1000000000
#define BigInt vector<ull>
#define ll long long
#define ull unsigned long long

template<class T> T GCD(T a, T b){return(!b?a:GCD(b,a%b));}
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
						
			int n;
			scanf("%d", &n);
			
			forn(i, 0, 1, n){
					int g, mg;
					scanf("%d%d", &g, &mg);
					
					vector<int> godzilla, mecha_godzilla;
					forn(j, 0, 1, g){
							int s;
							scanf("%d", &s);
							godzilla.pb(s);
					}
					
					forn(j, 0, 1, mg){
							int s;
							scanf("%d", &s);
							mecha_godzilla.pb(s);
					}					
					
					make_heap(all(godzilla));
					make_heap(all(mecha_godzilla));
					
					while(godzilla.size()>0 && mecha_godzilla.size()>0){
							int godzilla_weak=godzilla.front(),
							    mecha_godzilla_weak=mecha_godzilla.front();
									
							if(godzilla_weak==mecha_godzilla_weak){
									pop_heap(all(mecha_godzilla));
									mecha_godzilla.pop_back();
							} else if(godzilla_weak<mecha_godzilla_weak){
									pop_heap(all(godzilla));
									godzilla.pop_back();
							} else {
									pop_heap(all(mecha_godzilla));
									mecha_godzilla.pop_back();
							}
					}
					
					if(godzilla.size()==0) printf("MechaGodzilla\n");
					else printf("Godzilla\n");
			}

			return 0;
}