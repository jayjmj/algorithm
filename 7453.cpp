/*
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int A[4000],B[4000],C[4000],D[4000];

int main(){

	int n;
	scanf("%d",&n);

	for(int i = 0 ; i < n ; i++){
		scanf("%d %d %d %d",&A[i],&B[i],&C[i],&D[i]);
	}

	vector<int> X,Y;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			X.push_back(A[i]+B[j]);
			Y.push_back(C[i]+D[j]);
		}
	}
	sort(X.begin(),X.end());

	int count = 0;
	for(int y : Y){
		pair<vector<int>::iterator,vector<int>::iterator> range = equal_range(X.begin(),X.end(),-y);
		count += range.second-range.first;
	}

	printf("%d\n",count);

	return 0;
}
*/



/*
 * A,B의 합의 경우를 구해서 정렬한다. O(n^2logn^2) -> X
 * C,D의 합의 경우를 구해서 정렬한다. O(n^2logn^2) -> Y
 * X의 앞에서부터 Y의 뒤에서부터 하나씩 움직이면서 더한 값을 0과 비교한다. (meet in the middle)
 *
 * 한쪽 배열에 똑같은 숫자가 2개나오면 다르게 처리해야됨!!
 */

/*
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int A[4000],B[4000],C[4000],D[4000];

int main(){

	int n;
	scanf("%d",&n);

	for(int i = 0 ; i < n ; i++){
		scanf("%d %d %d %d",&A[i],&B[i],&C[i],&D[i]);
	}

	vector<int> X,Y;
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			X.push_back(A[i]+B[j]);
			Y.push_back(C[i]+D[j]);
		}
	}
	sort(X.begin(),X.end());
	sort(Y.begin(),Y.end());

	vector<pair<int,int> > cX,cY;
	int pX = X[0],pY = Y[0], countX = 1, countY = 1;
	for(int i = 1 ; i < X.size() ; i++){
		if(pX == X[i]) countX++;
		else{
			cX.push_back(make_pair(pX,countX));
			countX = 1;
			pX = X[i];
		}
	}
	cX.push_back(make_pair(pX,countX));

	for(int i = 1 ; i < Y.size() ; i++){
		if(pY == Y[i]) countY++;
		else{
			cY.push_back(make_pair(pY,countY));
			countY = 1;
			pY = Y[i];
		}
	}
	cY.push_back(make_pair(pY,countY));

	int count = 0;
	for(int i = 0, j = cY.size()-1 ; i < cX.size() && j >= 0 ;){
		int num = cX[i].first+cY[j].first;
		if(num == 0){
			count += cX[i].second*cY[j].second;
			i++;
			j--;
		}
		else if(num > 0) j--;
		else i++;
	}

	printf("%d\n",count);

	return 0;
}
*/
