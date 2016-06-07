/*#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(const int &a,const int &b){
	return a>b;
}

int main(){

	int K;
	scanf("%d",&K);

	int num;
	for(int i = 1 ; i <= K ; i++){
		scanf("%d",&num);

		vector<int> scores;
		int score;
		for(int j = 0 ; j < num ; j++){
			scanf("%d",&score);
			scores.push_back(score);
		}
		sort(scores.begin(),scores.end(),compare);

		int maxGap = 0;
		for(int j = 0 ; j < num-1 ; j++){
			if(maxGap < abs(scores[j]-scores[j+1])) maxGap = abs(scores[j]-scores[j+1]);
		}

		printf("Class %d\n",i);
		printf("Max %d, Min %d, Largest gap %d\n",scores[0],scores[num-1],maxGap);
	}

	return 0;
}*/
