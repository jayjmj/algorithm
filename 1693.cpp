/*
#include <cstdio>
#include <queue>
#include <vector>

using namespace std;

int color[100001];
int ind[100001];
vector<int> v[100001];

typedef struct node{
	int num;
	int indegree;
	node(int _n,int _i){num=_n;indegree=_i;}
	bool operator<(const struct node &a) const{
		return indegree > a.indegree;
	}
} Node;

int main(){

	int n;
	scanf("%d",&n);

	for(int i = 1 ; i < n ; i++){
		int a,b;
		scanf("%d %d",&a,&b);
		v[a].push_back(b);
		v[b].push_back(a);
		ind[a]++;
		ind[b]++;
	}

	priority_queue<Node> pq;
	for(int i = 1 ; i <= n ; i++){
		pq.push(Node(i,ind[i]));
	}

	queue<Node> q;
	while(!pq.empty() || !q.empty()){
		Node x = pq.top(); pq.pop();

		if(x.indegree == 0){

		}
		else if(x.indegree == 1){
			ind[x.num]--;

			printf("%d\n",x.num);

			int size = v[x.num].size();
			for(int i = 0 ; i < size ; i++){
				if(ind[v[x.num][i]] > 0){
					ind[v[x.num][i]]--;
				}
			}
		}
		else{
			q.push(Node(x.num,ind[x.num]));
		}

		if(pq.empty()){
			while(!q.empty()){
				pq.push(q.front());
				q.pop();
			}
		}
	}

	//printf("%d\n",cost+1);

	return 0;
}
*/

