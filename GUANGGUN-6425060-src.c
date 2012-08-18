#include<stdio.h>
#include<stdlib.h>
int main()
{
	long long int n,t,s,k;
	while(scanf("%lld",&n)!=EOF)
	{
		if(n<10)
		{
			printf("%lld\n",n*n);
			continue;
		}
		t=((n-10)/9)+1;
		k=10+((t-1)*9);
		s=((81*t)+1)+((n-k)*(n-k+2));
		printf("%lld\n",s);
	}
	return 0;
}
