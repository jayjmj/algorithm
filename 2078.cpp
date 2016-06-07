/*#include <cstdio>

int main(){

	long long L,R;
	scanf("%lld %lld",&L,&R);

	long long lCnt = 0,rCnt = 0;
	while(!(L == 1 && R == 1)){
		if(L != 1 && R != 1){
			if(L > R){
				lCnt += L/R;
				L = L%R;
			}
			else{
				rCnt += R/L;
				R = R%L;
			}
		}
		else{
			if(L > R){
				lCnt += L-R;
				L = 1;
			}
			else{
				rCnt += R-L;
				R = 1;
			}
		}
	}

	printf("%lld %lld",lCnt,rCnt);

	return 0;
}*/
