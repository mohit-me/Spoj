#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX_N = 100;
int N;
int xs[MAX_N];

int solve(){
	vector<int> left, right;
	left.reserve(N*N*N);
	right.reserve(N*N*N);
	for(int i=0; i<N; i++){
		for(int j=0; j<N; j++){
			for(int k=0; k<N; k++){
				left.push_back(xs[i] * xs[j] + xs[k]);
			}
		}
	}

	for(int i=0; i<N; i++)if(xs[i]){
		for(int j=0; j<N; j++){
			for(int k=0; k<N; k++){
				right.push_back( xs[i] * (xs[j] + xs[k]) );
			}
		}
	}

	sort(left.begin(), left.end());
	sort(right.begin(), right.end());
	vector<int> idx = left;
	idx.erase(unique(idx.begin(), idx.end()), idx.end());

	int ans = 0;
	for(int i=0, M=idx.size(); i<M; i++){
		pair<vector<int>::iterator, vector<int>::iterator> L = equal_range(left.begin(), left.end(), idx[i]), R = equal_range(right.begin(), right.end(), idx[i]);
		ans += distance(L.first, L.second) * distance(R.first, R.second);
	}

	return ans;
}

int main(){
	scanf("%d",&N);
	for(int i=0; i<N; i++){
		scanf("%d", xs+i);
	}

	printf("%d\n", solve());
	return 0;
}