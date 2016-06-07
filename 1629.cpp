/*
#include <cstdio>

long long pow(int a,int b,int c){
	if(b == 0) return 1;
	else if(b == 1) return a%c;
	else{
		long long tmp = pow(a,b/2,c)%c;
		if(b%2 == 0) return (tmp*tmp)%c;
		else return ((tmp*tmp)%c*a%c)%c;
	}
}

int main(){

	int A,B,C;
	scanf("%d %d %d",&A,&B,&C);

	long long ans = pow(A,B,C);
	printf("%lld\n",ans);

	return 0;
}
*/
