#include<iostream>
using namespace std;
int main()
	{
		int t,n,a,d;
		long sum;
		cin>>t;
		while(t--){
		cin>>n>>a>>d;
		sum=a*n+n*(n-1)*d/2;
		cout<<sum<<endl;
		}
		return 0;
	}
