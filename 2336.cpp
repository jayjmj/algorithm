//보류.. 세그먼트 트리 등의 내용을 완전히 이해하고 덤비자.

/*

#include <cstdio>

int first[500000];
int sur[500000][2];

int main(){
	int N;
	scanf("%d",&N);

	for(int i = 0 ; i < N ; i++) scanf("%d",&first[i]);
	int num;
	for(int j = 0 ; j < 2 ; j++){
		for(int i = 0 ; i < N ; i++){
			scanf("%d",&num);
			sur[num-1][j] = i;
		}
	}





	return 0;
}


#include <cstdio>
#include <vector>
#include <set>

using namespace std;

int S[500000][3];

int compare(int a,int b){
	if(S[a][0] > S[b][0] && S[a][1] > S[b][1] && S[a][2] > S[b][2]) return -1;
	else if(S[a][0] < S[b][0] && S[a][1] < S[b][1] && S[a][2] < S[b][2]) return 1;
	else return 0;
}

vector<int> skyline(int s, int e){

	if(s==e){
		vector<int> v(1,s);
		return v;
	}
	int mid = (s+e)/2;

	vector<int> a = skyline(s,mid);
	vector<int> b = skyline(mid+1,e);

	int aSize = a.size(), bSize = b.size();
	for(int i = 0 ; i < a.size() ; i++){
		for(int j = 0 ; j < b.size() ; j++){
			int cmp = compare(a[i],b[j]);
			if(cmp == 1){
				a.erase(a.begin()+i);
				i--;
				break;
			}
			else if(cmp == -1){
				b.erase(b.begin()+j);
				j--;
			}
		}
	}
	a.insert(a.end(),b.begin(),b.end());

	return a;
}

int main(){
	int N;
	scanf("%d",&N);

	int id;
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < N ; j++){
			scanf("%d",&id);
			S[id-1][i] = N-j;
		}
	}
	vector<int> ans = skyline(0,N-1);
	printf("%d\n",ans.size());

	return 0;
}
*/
