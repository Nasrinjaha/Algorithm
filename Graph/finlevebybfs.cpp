#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main(){
    ll node,edge,x,y,cost,start;
    cin>>node>>edge>>start;
    vector<ll>adj[node+1];
    vector<ll>parent(node);
    vector<ll>level(node);
    ll vis[node+1];
    parent[start] = -1;
    level[start] = 0;
    memset(vis,0,sizeof(vis));
    for(ll i=1;i<=edge;i++)
    {
        cin>>x>>y;
        adj[x].pb(y);
         adj[y].pb(x);
    }
    queue<ll>q;
    q.push(start);
    vis[start]=1;

    while(q.size())
    {
        x=q.front();
       // cout<<"parent of " <<  x << " is " <<  parent[x] << " and level is " << level[x] << endl;
        cout << x << " ";
        q.pop();
        for(ll i=0;i<adj[x].size();i++)
        {
            if(vis[adj[x][i]]==0)
            {
                vis[adj[x][i]]=1;
                q.push(adj[x][i]);
                parent[adj[x][i]]=x;
                level[adj[x][i]] = level[x]+1;

            }
        }

    }

   return 0;

}
/*
4 4 1
1 2
1 3
2 4
3 4
*/
