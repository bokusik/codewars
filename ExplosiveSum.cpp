#include <stdio.h>
using ull = unsigned long long;

long long d[1000][1000];

long long dec(long long n, long long k) {
    if (n >= 0 && k >= 0 && d[n][k] > 0) return d[n][k];
    if (n < 0) return 0;
    if (n <= 1 || k == 1) return 1;
    d[n][k] = dec(n, k - 1) + dec(n - k, k);
    return d[n][k];
}

ull exp_sum(unsigned int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            d[i][j] = -1;
        }
    }
    ull result = dec(n,n);
    return result;
}