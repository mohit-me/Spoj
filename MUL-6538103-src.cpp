#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
const double PI = acos(-1.0), EPS = 1e-8;

#define REP(i,n) for (int i=0; i<(int)(n); ++i)
#define FOR(i,k,n) for (int i=(k); i<(int)(n); ++i)

struct C { double x, y; };
void add(C &lhs, C &rhs) { lhs.x += rhs.x, lhs.y += rhs.y; }
void mul(C &lhs, C &rhs) {  
    double rx = lhs.x*rhs.x - lhs.y*rhs.y, ry = lhs.x*rhs.y + lhs.y*rhs.x;
    lhs.x = rx, lhs.y = ry;
}

const int B = 10000, S = 1<<13;
int pw[] = {1, 10, 100, 1000};

char temp[S];
void scanval(C to[], int &N) {
    scanf(" %s", temp);
    N = strlen(temp);
    REP(j, (N+3)/4) to[j].x = to[j].y = 0;
    REP(j, N) to[j/4].x += (double)(temp[N-1-j] - '0') * pw[j%4];
    N = (N+3)/4; // ceil(N/4)
}

C vtemp[S*4], eqo[2][20];
void fft_sub(C to[], C vd[], int u, int depth, int binder, int inverse) {
    if (depth == u) { to[0] = vd[binder]; return; }
    int n = 1<<(u-depth);
    fft_sub(vtemp + 2*n, vd, u, depth+1, binder, inverse);
    fft_sub(vtemp + 3*n, vd, u, depth+1, binder | (1<<depth), inverse);

    C omega, argu = eqo[inverse][u-depth];
    omega.x = 1.0, omega.y = 0.0;

    REP(bit, n) {
        int y = bit; if (y >= n/2) y -= n/2;
        C tt = vtemp[3*n+y];
        mul(tt, omega);
        add(tt, vtemp[2*n+y]);
        to[bit] = tt;
        mul(omega, argu);
    }
}
void fft(C vd[], int u) { fft_sub(vd, vd, u, 0, 0, 0); }
void ifft(C vd[], int u) {
    int N = 1<<u;
    fft_sub(vd, vd, u, 0, 0, 1);
    REP(j, N) vd[j].x /= N, vd[j].y /= N;
}

C va[S], vb[S], vc[S];
int Na, Nb;
ll digit[S];

int main() {
        // initialization
    REP(j, 20) {
        int n = 1 << j;
        eqo[0][j].x = cos(-2*PI / n), eqo[0][j].y = sin(-2*PI / n);
        eqo[1][j].x = cos(2*PI / n),  eqo[1][j].y = sin(2*PI / n);
    }

    int T; scanf("%d", &T);
    while (T--) {
        scanval(va, Na); scanval(vb, Nb);
        int u = 2;
        for (; ; u++) if (1<<u > (Na+Nb+3)) break;
        int N = 1<<u;
            // fill zero
        FOR(j, Na, N) va[j].x = 0, va[j].y = 0;
        FOR(j, Nb, N) vb[j].x = 0, vb[j].y = 0;

        fft(va, u); fft(vb, u);
        REP(j, N) vc[j] = va[j], mul(vc[j], vb[j]);
        ifft(vc, u);

        REP(j, N) digit[j] = (ll)(vc[j].x+0.5);
        REP(j, N) {
            ll d = digit[j]; digit[j] = 0;
            for (int u = 0; d; d /= B, u++) digit[j+u] += d%B;
        }
        int cut = 1;
        for (int j = N-1; j>=0; --j) {
            if (cut) {
                if (digit[j]) { printf("%d", (int)digit[j]); cut = 0; }
            }
            else printf("%04d", (int)digit[j]);
        }
        if (cut) printf("0");
        puts("");
    }
}
