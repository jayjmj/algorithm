/*
#include <cstdio>
#include <vector>

using namespace std;

int main(){
    int T;
    scanf("%d",&T);

    for(int t = 1 ; t <= T ; t++){
        
        char c;
        vector<char> v;
        getchar();
        while(scanf("%c",&c) == 1 && c != '\n'){
            v.push_back(c);
        }

        char rule[26];
        for(int i = 0 ; i < 26 ; i++) scanf("%c",&rule[i]);

        int size = v.size();
        for(int i = 0 ; i < size ; i++){
            if(v[i] != ' ') printf("%c",rule[v[i]-'A']);
            else printf(" ");
        }
        printf("\n");
    }

    return 0;
}
*/
