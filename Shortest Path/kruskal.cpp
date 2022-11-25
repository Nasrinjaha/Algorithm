#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define ll long long
pair<long long , pair<int,int> > p[10007];
int id[10007];
int e;
void init(){
    for(int i=0;i<10007;i++){
        id[i] = i;
    }
}
int find_set(int x){
    if(id[x]!=x){
       id[x]=find_set(id[x]);
    }
    return id[x];
}

void union_set(int x,int y){
   x  = find_set(x);
   y = find_set(y);
   id[x] = id[y];
}

ll kruskal(){
    int x,y;
    ll cost,final_cost=0;
    for(int i=0;i<e;i++){
        cost=p[i].F ;
        x = p[i].S.F;
        y = p[i].S.S;
        if(find_set(x)!=find_set(y)){
           final_cost+=cost;
           union_set(x,y);
        }

    }
    return final_cost;

}
int main(){
    init();

    cin >> e;
    int s,d,cost;
    for(int i =0;i<e;i++){
        cin >> s >> d >> cost;
        p[i].F = cost;
        p[i].S.F = s;
        p[i].S.S = d;
    }
    sort(p,p+e);
   cout <<  kruskal() << endl;
   cout << endl;
    for(int i=0;i<e;i++){
        cout << p[i].F << " " << p[i].S.F << " " << p[i].S.S  << endl;
    }


}
/*
6
1 2 2
1 3 1
1 5 3
2 3 1
3 4 2
4 5 4
*/
