/*#include <cstdio>
#include <string>
#include <vector>
#include <map>

using namespace std;

map<string,string> fezAlphabet;
char str[300][300];

string decFezAlpha(int x,int y){
	string temp ("");
	for(int i = x ; i < x+5 ; i++){
		for(int j = y ; j < y+5 ; j++){
			temp += str[i][j];
		}
	}

	string ans = fezAlphabet[temp];
	return fezAlphabet[temp];
}

void setFezAlpha(){
	fezAlphabet["#####""..#..""#...#""#####""#####"] = "a";
	fezAlphabet["#####""#...#""#.#.#""....#""#####"] = "b";
	fezAlphabet["#####""###..""###.#""###..""#####"] = "c";
	fezAlphabet["#####""#####""#####""..###""#.###"] = "d";
	fezAlphabet["#####""..###""#.###""#....""#####"] = "e";
	fezAlphabet["#####""#.#.#""....#""#.#.#""#####"] = "f";
	fezAlphabet["###.#""##..#""##.##""##..#""###.#"] = "g";
	fezAlphabet["#####""#...#""#.#.#""#...#""###.#"] = "h";
	fezAlphabet["#.#.#""#...#""#####""#####""#####"] = "i";
	fezAlphabet["#####""#####""#####""###..""###.#"] = "j";
	fezAlphabet["###.#""###.#""###.#""#...#""#.###"] = "kq";
	fezAlphabet["#####""#...#""##.##""#...#""##.##"] = "l";
	fezAlphabet["#####""#####""#...#""..#..""#####"] = "m";
	fezAlphabet["#####""#....""#.#.#""#...#""#####"] = "n";
	fezAlphabet["#####""..###""#.###""..###""#####"] = "o";
	fezAlphabet["###.#""###..""#####""#####""#####"] = "p";
	fezAlphabet["#####""....#""###.#""###..""#####"] = "z";
	fezAlphabet["#####""#.#.#""#....""#.#.#""#####"] = "r";
	fezAlphabet["#.###""#..##""##.##""#..##""#.###"] = "s";
	fezAlphabet["#.###""#...#""#.#.#""#...#""#####"] = "t";
	fezAlphabet["#####""#####""#####""#...#""#.#.#"] = "uv";
	fezAlphabet["#.###""..###""#####""#####""#####"] = "w";
	fezAlphabet["###.#""#...#""#.###""#.###""#.###"] = "x";
	fezAlphabet["##.##""#...#""##.##""#...#""#####"] = "y";
	fezAlphabet["#####""#...#""#...#""#...#""#####"] = "0";
	fezAlphabet["#####""#.#.#""#.#.#""#...#""#####"] = "1";
	fezAlphabet["#####""#...#""#.###""#...#""#####"] = "2";
	fezAlphabet["#####""#...#""#.#.#""#.#.#""#####"] = "3";
	fezAlphabet["#####""#.#.#""#.###""#...#""#####"] = "3";
	fezAlphabet["#####""#...#""###.#""#...#""#####"] = "4";
	fezAlphabet["#####""#.#.#""#.#.#""#.#.#""#####"] = "4";
	fezAlphabet["#####""#...#""#.###""#.#.#""#####"] = "5";
	fezAlphabet["#####""#.#.#""###.#""#...#""#####"] = "5";
	fezAlphabet["#####""#...#""#####""#...#""#####"] = "6";
	fezAlphabet["#####""#.#.#""#.###""#.#.#""#####"] = "6";
	fezAlphabet["#####""#...#""###.#""#.#.#""#####"] = "7";
	fezAlphabet["#####""#.#.#""#####""#...#""#####"] = "7";
	fezAlphabet["#####""#.#.#""###.#""#.#.#""#####"] = "8";
	fezAlphabet["#####""#...#""#####""#.#.#""#####"] = "9";
	fezAlphabet["#####""#.#.#""#####""#.#.#""#####"] = "10";
	fezAlphabet["....."".....""....."".....""....."] = "_";
}

int main(){

	setFezAlpha();

	int R,C;
	scanf("%d %d",&R,&C);

	for(int i = 0 ; i < 6*R-1 ; i++){
		scanf("%s",&str[i]);
	}

	for(int j = C-1 ; j >= 0 ; j--){
		for(int i = 0 ; i < R ; i++){
			printf("%s",decFezAlpha(6*i,6*j).c_str());
		}
		printf("\n");
	}

	return 0;
}*/
