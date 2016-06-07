/*
#include <cstdio>
#include <queue>

using namespace std;

int xMove[] = {0,0,1,-1};
int yMove[] = {1,-1,0,0};

int change(int num ,int a, int b){

}

int pow(int n, int p){
	if(p == 0) return 1;
	else if(p == 1) return n;
	else{
		int tmp = pow(n,p/2);
		if(p/2 == 0) return tmp*tmp;
		else return tmp*tmp*n;
	}
}

int main(){

	int n;
	int num = 0;
	int idx = 0;
	pair<int,int> start;
	for(int i = 0 ; i < 3 ; i++){
		for(int j = 0 ; j < 3 ; j++){
			scanf("%d",&n);
			num += n*pow(10,idx);
			idx++;
			start = {i,j};
		}
	}

	pair<pair<int,int>,int>  a;
	a = {start,num};
	queue<pair<pair<int,int>,int> > q;
	q.push(a);
	while(!q.empty()){



	}



	return 0;
}
*/
