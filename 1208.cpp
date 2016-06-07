/* 답이 long long 크기만큼 나오는거 유의!!, 이거 더 짧게 짜는방법도 많은데,, 잘 모르겠음..

#include <cstdio>
#include <vector>
#include <queue>

using namespace std;

vector<pair<int,long long> > sumOfSet(vector<int> set){
	int size = set.size();
	vector<pair<int,long long> > ans;

	queue<int> q;
	q.push(0);

	int idx = 0;
	while(size > idx){
		int qSize = q.size();
		for(int i = 0 ; i < qSize ; i++){
			int x = q.front(); q.pop();

			q.push(x);
			q.push(x+set[idx]);
		}
		idx++;
	}

	priority_queue<int> pq;
	while(!q.empty()){
		pq.push(-q.front());
		q.pop();
	}

	int px = 10000000 ,x;
	while(!pq.empty()){
		x = -pq.top(); pq.pop();

		if(x == px){
			pair<int,long long> temp = ans.back();
			ans.pop_back();
			ans.push_back(make_pair(temp.first,temp.second+1));
		}
		else{
			ans.push_back(make_pair(x,1));
		}
		px = x;
	}

	return ans;
}

int main(){

	int N,S;
	scanf("%d %d",&N,&S);

	int elem;
	vector<int> aSet,bSet;
	for(int i = 0 ; i < N/2 ; i++){
		scanf("%d",&elem);
		aSet.push_back(elem);
	}
	for(int i = N/2 ; i < N ; i++){
		scanf("%d",&elem);
		bSet.push_back(elem);
	}

	vector<pair<int,long long> > sumOfSetA,sumOfSetB;
	sumOfSetA = sumOfSet(aSet);
	sumOfSetB = sumOfSet(bSet);

	int lenOfSumA,lenOfSumB;
	lenOfSumA = sumOfSetA.size();
	lenOfSumB = sumOfSetB.size();

	long long count = 0;
	for(int i = 0, j = lenOfSumB-1; i < lenOfSumA && j >= 0;){
		if(sumOfSetA[i].first+sumOfSetB[j].first < S) i++;
		else if(sumOfSetA[i].first+sumOfSetB[j].first > S) j--;
		else{
			count = count + sumOfSetA[i].second*sumOfSetB[j].second;
			i++;
		}
	}

	if(S == 0) printf("%lld\n",count-1);
	else printf("%lld\n",count);

	return 0;
}*/
