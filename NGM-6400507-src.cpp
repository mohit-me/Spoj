#include <cstdio>
using namespace std;

int main(){
	int x;
	scanf("%d", &x);
	if(x % 10 == 0){
		puts("2");
	}
	else{
		puts("1");
		printf("%d\n", x%10);
	}

	return 0;
}