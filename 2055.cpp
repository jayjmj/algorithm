/*
#include <stdio.h>

typedef long long ll;

ll res;

int main(void)
{
    ll N, M, i, j, k;

    scanf("%lld %lld", &N, &M);

    for (i = 1; i <= N; i++) for (j = 1; j <= M; j++)
        res += (4 * (i - 1)*(j - 1) + 2 * (i - 1) + 2 * (j - 1) + 4 * (i + j - 2) + 4)*(N - i + 1)*(M - j + 1);

    printf("%lld\n", res);
}
*/
