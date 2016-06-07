/*
#include <cstdio>
#include <vector>

using namespace std;

int gcd(int a,int b){
	if(b == 0 || a == b) return a;
	else return gcd(b,a%b);
}

int main(){
	int n;
	scanf("%d",&n);

	int cd;
	int num;
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&num);
		if(i == 0) cd = num;
		cd = gcd(cd,num);
	}

	vector<int> ans;
	for(int i = 1 ; i*i <= cd ; i++){
		if(cd%i == 0) ans.push_back(i);
	}

	int size = ans.size();
	for(int i = size-1 ; i >= 0 ; i--){
		if(cd/ans[i] != ans[i]) ans.push_back(cd/ans[i]);
	}

	size = ans.size();
	for(int i = 0 ; i < size ; i++){
		printf("%d\n",ans[i]);
	}

	return 0;
}
*/
