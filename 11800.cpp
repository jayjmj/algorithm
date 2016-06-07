/*
#include <cstdio>
#include <map>
#include <string>

using namespace std;

map<int,string> nm = {
		{1,"Yakk"},
		{2,"Doh"},
		{3,"Seh"},
		{4,"Ghar"},
		{5,"Bang"},
		{6,"Sheesh"}
};

map<int,string> sm = {
		{1,"Habb Yakk"},
		{2,"Dobara"},
		{3,"Dousa"},
		{4,"Dorgy"},
		{5,"Dabash"},
		{6,"Dosh"}
};


int main(){
	int T;
	scanf("%d",&T);

	for(int t = 1 ; t <= T ; t++){
		int a,b;
		scanf("%d %d",&a,&b);

		if(b > a){
			int tmp = a;
			a = b;
			b = tmp;
		}

		printf("Case %d: ",t);
		if(a == b) printf("%s\n",sm[a].c_str());
		else if(a == 6 && b == 5) printf("%s\n","Sheesh Beesh");
		else printf("%s %s\n",nm[a].c_str(),nm[b].c_str());
	}

	return 0;
}
*/
