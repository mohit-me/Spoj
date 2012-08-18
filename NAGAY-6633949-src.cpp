#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{

        long long n,k;
        scanf("%lld",&n);
        scanf("%lld",&k);
        long long i = 1;
        long long a = 0;
        while (i <= n) {
            long long j = k / i;
            long long r = k % i;
            if (j == 0) {
                a += r * (n - i + 1);
                i = n + 1;
            } else {
                long long s = r / j;
                if (s + 1 > n - i + 1) {
                    s = n - i;
                }
                a += (r + r - s * j) * (s + 1) / 2;
                i += s + 1;
            }
        }
        printf("%lld",a);


return 0;
}

