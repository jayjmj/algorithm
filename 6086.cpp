/*
#include <cstdio>
#include <vector>

using namespace std;

struct NetworkFlow{
	struct Edge{
		int to;
		int capacity;
		Edge *r;
		Edge(int _t, int _c){to=_t;capacity=_c;r=NULL;}
	};

	int n;
	int src,dst;
	vector<vector<Edge *> > graph;
	vector<bool> check;
	NetworkFlow(int _n,int _src,int _dst){
		n=_n,src=_src,dst=_dst;
		graph.resize(n);
		check.resize(n);
	}

	void add_edge(int u,int v,int c){
		Edge *e = new Edge(v,c);
		Edge *re = new Edge(u,0);
		e->r = re;
		re->r = e;
		graph[u].push_back(e);
		graph[v].push_back(re);
	}

	int dfs(int x, int c){

		if(check[x] == true) return 0;
		check[x] = true;
		if(x == dst) return c;

		int size = graph[x].size();
		for(int i = 0 ; i < size; i++){
			Edge *e = graph[x][i];
			int nc = e->capacity;
			if(nc > 0){
				if(c!=0 && nc > c) nc = c;
				int flow = dfs(e->to,nc);
				if(flow > 0){
					e->capacity -= flow;
					e->r->capacity += flow;
					return flow;
				}
			}
		}

		return 0;
	}

	int flow(){
		int ans = 0;
		while(true){
			fill(check.begin(),check.end(),false);
			int f = dfs(src,0);
			if(f==0) break;
			ans += f;
		}
		return ans;
	}
};

int encNode(char x){
	int tmp = (int)x-'A';
	if(tmp>=26) return (int)x-'a'+26;
	else return tmp;
}


int main(){
	int N;
	scanf("%d",&N);
	getchar();

	NetworkFlow nf = NetworkFlow(52,'A'-'A','Z'-'A');
	for(int i = 0 ; i < N ; i++){
		char u,v;
		int c;
		scanf("%c %c %d",&u,&v,&c);
		getchar();
		nf.add_edge(encNode(u),encNode(v),c);
		nf.add_edge(encNode(v),encNode(u),c);
	}
	printf("%d\n",nf.flow());

	return 0;
}
*/
