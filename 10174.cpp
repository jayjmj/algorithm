/*
#include <cstdio>
#include <cctype>
#include <vector>

using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	getchar();

	for(int i = 0 ; i < n ; i++){
		char c;
		vector<char> v;
		while(scanf("%c",&c) == 1 && c != '\n'){
			v.push_back(tolower(c));
		}

		bool success = true;
		int size = v.size();
		for(int i = 0 ; i <= (size-1)/2 ; i++){
			if(v[i] != v[size-1-i]){
				success = false;
				break;
			}
		}

		if(success) printf("Yes\n");
		else printf("No\n");
	}

	return 0;
}
*/
