/*#include <cstdio>
#include <vector>

using namespace std;

struct MaximumFlow{
    struct Edge{
        int to;
        int capacity;
        Edge *rev;
        Edge(int _t,int _c){
            to = _t; capacity = _c; rev = NULL;
        }
    };

    int n;
    int src,dst;

    vector<vector<Edge *> > graph;
    vector<bool> check;

    MaximumFlow(int _n,int _src,int _dst){
        n = _n;
        src = _src;
        dst = _dst;
        graph.resize(_n);
        check.resize(_n);
    }

    void addEdge(int u, int v, int c){
        Edge *e = new Edge(v,c);
        Edge *re = new Edge(u,0);
        e->rev = re;
        re->rev = e;
        graph[u].push_back(e);
        graph[v].push_back(re);
    }


    int dfs(int x, int c){

        if(check[x]) return 0;
        check[x] = true;
        if(x == dst) return c;

        int size = graph[x].size();
        for(int i = 0 ; i < size ; i++){
            if(graph[x][i]->capacity > 0){
                int nc = graph[x][i]->capacity;
                if(c != 0 && nc > c) nc = c;

                int flow = dfs(graph[x][i]->to,nc);
                if(flow > 0){
                    graph[x][i]->capacity -= flow;
                    graph[x][i]->rev->capacity += flow;
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
            if(f == 0) break;
            ans += f;
        }

        return ans;
    }
};

int main(){

    int N,M;
    scanf("%d %d",&N,&M);

    MaximumFlow mf = MaximumFlow(N+M+2,0,N+M+1);
    for(int i = 1 ; i <= N ; i++){
        int cnt;
        scanf("%d",&cnt);
        for(int j = 1 ; j <= cnt ; j++){
            int job;
            scanf("%d",&job);

            mf.addEdge(i,job+N,1);
        }
    }

    for(int i = 1 ; i <= N ; i++) mf.addEdge(0,i,1);
    for(int i = 1 ; i <= M ; i++) mf.addEdge(i+N,N+M+1,1);

    int ans = mf.flow();
    printf("%d\n",ans);

    return 0;
}*/

/*#include <cstdio>
#include <vector>

using namespace std;

struct MaximumFlow{
	int n;

	vector<vector<int> > graph;
	vector<bool> check;
	vector<int> pred;

	MaximumFlow(int _n){
		n = _n;
		graph.resize(_n+1);
		check.resize(_n+1);
		pred.resize(_n+1,-1);
	}

	void addEdge(int u, int v){
		graph[u].push_back(v);
	}

	bool dfs(int x){
		if(x == -1) return true;
		int size = graph[x].size();
		for(int i = 0 ; i < size ; i++){
			int y = graph[x][i];
			if(!check[y]){
				check[y] = true;
				if(dfs(pred[y])){
					pred[y] = x;
					return true;
				}
			}
		}
		return false;
	}

	int flow(){

		int ans = 0;
		for(int i = 1 ; i <= n ; i++){
			fill(check.begin(),check.end(),false);
			if(dfs(i)){
				ans+=1;
			}
		}

		return ans;
	}
};

int main(){
	int N,M;
	scanf("%d %d",&N,&M);

	MaximumFlow mf = MaximumFlow(N>M?N:M);
	for(int i = 1 ; i <= N ; i++){
		int cnt;
		scanf("%d",&cnt);
		for(int j = 1 ; j <= cnt ; j++){
			int job;
			scanf("%d",&job);
			mf.addEdge(i,job);
		}
	}

	int ans = mf.flow();
	printf("%d\n",ans);

	return 0;
}*/
