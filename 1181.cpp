/*#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

bool comp(const pair<string,int> &a, const pair<string,int> &b){
	if(a.second < b.second){
		return true;
	}
	else if(a.second > b.second){
		return false;
	}
	else{
		return a.first < b.first;
	}
}

int main(){
	int N;
	scanf("%d",&N);


	vector<pair<string,int> > v;
	char tmp[51];
	string word;
	for(int i = 0 ; i < N ; i++){
		scanf("%s",tmp);
		word = tmp;

		v.push_back(make_pair(word,strlen(tmp)));
	}

	sort(v.begin(),v.end(),comp);

	word = "";
	for(int i = 0 ; i < N ; i++){
		if(word != v[i].first){
			word = v[i].first;
			printf("%s\n",word.c_str());
		}
	}

	return 0;
}*/
