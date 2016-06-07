/*#include <cstdio>

int A[101];
int D[10001];

int main(){

	int n,k;
	scanf("%d %d",&n,&k);

	for(int i = 1 ; i <= n ; i++){
		scanf("%d",&A[i]);
	}

	D[0] = 1;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= k ; j++){
			if(j-A[i] >= 0){
				D[j] += D[j-A[i]];
			}
		}
	}

	printf("%d\n",D[k]);

	return 0;
}*/

/* 플리즈런님 소스(참고)

#include <stdio.h>
#include <string.h>

int main() {
    int n, k;
    int coin[100];
    int m[10001];
    memset(coin, 0, sizeof(coin));
    memset(m, 0, sizeof(m));

    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++) {
        scanf("%d", &coin[i]);
    }

    for(int i=0; i<k+1; i+=coin[0]) {
        ++m[i];
    }

    for(int i=1; i<n; i++) {
        for(int j=coin[i]; j<k+1; j++) {
            m[j] += m[j-coin[i]];
        }
    }

    printf("%d\n", m[k]);
    return 0;
}

 */
