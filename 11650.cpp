/*
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct axis{
    int x,y;
    axis(int _x,int _y){x=_x;y=_y;}
}Axis;

bool cmp(const Axis &a, const Axis &b){
    if(a.x == b.x) return a.y < b.y;
    return a.x < b.x;
}

int main(){
    int N;
    scanf("%d",&N);

    vector<Axis> v;
    for(int i = 0 ; i < N ; i++){
        int xi,yi;
        scanf("%d %d",&xi,&yi);
        v.push_back(Axis(xi,yi));
    }
    sort(v.begin(),v.end(),cmp);

    int size = v.size();
    for(int i = 0 ; i < size ; i++) printf("%d %d\n",v[i].x,v[i].y);

    return 0;
}
*/
