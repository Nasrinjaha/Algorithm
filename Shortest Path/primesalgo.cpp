#include<bits/stdc++.h>
using namespace std;
#define pli pair<long long, int>
#define pb push_back
bool is_visited[100007];
vector<pli>v[100007];
priority_queue<pli>pq;

long long prims(int x){
    pq.push({0,x});
    long long min_cost = 0;

    while(!pq.empty()){
        pli p = pq.top();
        pq.pop();
        if(is_visited[p.second]) continue;
        is_visited[p.second] = 1;
        int sz = v[p.second].size();

        for(int i = 0 ; i<sz ; i++){
            if(!is_visited[v[p.second][i].second]){
                pq.push({-1*v[p.second][i].first,v[p.second][i].second});
            }
        }
        min_cost -= p.first;
    }
return min_cost;
}
int main(){
    int e,x,y;
    cin>>e;
    long long cost;
    for(int i = 0 ; i<e ; i++){
        cin>>x>>y>>cost;
        if(cost<0){
            return 0;
        }
        else{
             v[x].pb({cost,y});
             v[y].pb({cost,x});
        }

    }
    int start;
    cin >> start;
    cout<<prims(start);

return 0;
}
/*
6
1 2 2
1 3 1
1 5 3
2 3 1
3 4 2
4 5 4
1
*/
