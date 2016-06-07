// Lower bound를 이용한 LIS

/*
#include <cstdio>
#include <algorithm>

using namespace std;

int D[10001];

int main(){
	int T;
	scanf("%d",&T);

	for(int test_case = 1 ; test_case <= T ; test_case++){
		int N,K;
		scanf("%d %d",&N,&K);

		int idx = 0;
		for(int i = 1 ; i <= N ; i++){
			int num;
			scanf("%d",&num);

			int loc = lower_bound(D+1,D+1+idx,num) - D;
			D[loc] = num;
			if(loc == idx+1) idx++;
		}

		printf("Case #%d\n",test_case);
		if(idx >= K) printf("1\n");
		else printf("0\n");
	}

	return 0;
}
*/


// 이렇게 짜면 시간내에 너무 간당간당하다.
/*
#include <cstdio>
#include <cstring>

int D[10001];
int A[10001];

int main(){
	int T;
	scanf("%d",&T);

	for(int test_case = 1 ; test_case <= T ; test_case++){
		int N,K;
		scanf("%d %d",&N,&K);

		bool ans = false;
		for(int i = 1 ; i <= N ; i++){
			scanf("%d",&A[i]);
			for(int j = 0 ; j < i ; j++){
				if(A[i] > A[j]&& D[i] < D[j]+1) D[i] = D[j]+1;
			}
			if(D[i] >= K) ans = true;
		}

		printf("Case #%d\n",test_case);
		if(ans) printf("1\n");
		else printf("0\n");

		memset(D,0,sizeof(D));
	}


	return 0;
}
*/


/* yukariko 님 소스

#include <bits/stdc++.h>

using namespace std;

int lis(const vector<int>& a)
{
    vector<int> b;
    for(auto &pick : a)
    {
        auto lo = lower_bound(b.begin(), b.end(), pick);
        if(lo == b.end())
            b.push_back(pick);
        else
            *lo = pick;
    }
    return b.size();
}

int main()
{
    int T;
    scanf("%d", &T);

    for(int tc=1; tc <= T; tc++)
    {
        int N, K;
        scanf("%d%d", &N, &K);

        vector<int> a(N);
        for(int i=0; i < N; i++)
            scanf("%d", &a[i]);

        printf("Case #%d\n", tc);
        printf("%d\n", lis(a) >= K);
    }
    return 0;
}
*/
