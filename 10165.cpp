/*
#include <cstdio>
#include <queue>
#include <algorithm>

using namespace std;

const int inf = 1000000001;

struct line{
	int num;
	int a,b;
	line(int _a,int _b,int _num){ a=_a;b=_b;num=_num;}
	bool operator>(const line &d) const{
		return a < d.a
	}
};


int main(){

	int N,M;
	scanf("%d %d",&N,&M);

	vector<line> l;
	for(int i = 0 ; i < M ; i++){
		int a,b;
		scanf("%d %d",&a,&b);

		int len;
		if(a<b) len = b-a;
		else len = b+N-a;
		l.push_back(line(a,b,len));
	}

	sort(l.begin(),l.end(),cmp);
	int min = inf, max = -inf;
	int size = l.size();
	for(int i = 0 ; i < size; i++){

	}


	return 0;
}
*/
