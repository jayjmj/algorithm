/*
#include <cstdio>

int seq[1000001];
const int A = 0;
const int G = 1;
const int C = 2;
const int T = 3;
int enc[][4] = {{A,C,A,G},{C,G,T,A},{A,T,C,G},{G,A,G,T}};

int main(){
    int N;
    scanf("%d",&N);
    getchar();

    char c;
    for(int i = 1; i <= N ; i++){
        scanf("%c",&c);
        if(c=='A') seq[i]=A;
        else if(c=='G') seq[i]=G;
        else if(c=='C') seq[i]=C;
        else if(c=='T') seq[i]=T;
    }

    for(int i = N ; i >= 2; i--){
        seq[i-1] = enc[seq[i-1]][seq[i]];
    }

    if(seq[1] == A) printf("A\n");
    else if(seq[1] == G) printf("G\n");
    else if(seq[1] == C) printf("C\n"); 
    else if(seq[1] == T) printf("T\n");

    return 0;
}
*/
