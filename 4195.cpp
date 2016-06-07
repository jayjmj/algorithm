/*#include <cstdio>
#include <map>
#include <string>

using namespace std;

map<string,string> r;
map<string,int> ans;

string Find(string name){
	if(r[name].compare(name) == 0) return name;
	else return r[name] = Find(r[name]);
}

void Union(string name, string name2){

	string one = Find(name);
	string ano = Find(name2);

	r[one] = ano;
	if(one.compare(ano) != 0) ans[ano] = ans[ano] + ans[one];
}

int m4195(){

	int T;
	scanf("%d",&T);

	int nRelation;
	char tmp[21],tmp2[21];
	string name, name2;
	for(int test_case = 1 ; test_case <= T ; test_case++){
		scanf("%d",&nRelation);

		for(int i = 0 ; i < nRelation ; i++){
			scanf("%s %s",tmp, tmp2);
			name = tmp, name2 = tmp2;

			if(r.find(name) == r.end()){
				r[name] = name;
				ans[name] = 1;
			}
			if(r.find(name2) == r.end()){
				r[name2] = name2;
				ans[name2] = 1;
			}

			Union(name,name2);

			printf("%d\n",ans[Find(name2)]);
		}
		r.clear();
		ans.clear();
	}


	return 0;
}*/
