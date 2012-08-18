#include <stdio.h>
int solve(int N, int K,int T, int F){
	return (F - N)/(K-1) + F;
}

int main(){
	int C;
	scanf("%d",&C);
	while(C--){
		int N, K, T, F;
		scanf("%d%d%d%d",&N,&K,&T,&F);
		printf("%d\n", solve(N,K,T,F));
	}

	return 0;
}
