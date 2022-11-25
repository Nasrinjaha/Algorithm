#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,tar;
    scanf("%d %d",&n,&tar);
    int ara[n+10];
    for(int i=0;i<n;i++){
        scanf("%d",&ara[i]);
    }
    map <int,int> mp;
    int loc=-1;
    mp[ara[0]]=0;
    if(ara[0]>=tar){
        loc=0;
    }
    int sum=ara[0];
    for(int i=1;i<n;i++){
        sum+=ara[i];
        ara[i]=sum;
        mp[ara[i]]=i;
        if(loc==-1 && ara[i]>=tar){
            loc=i;
        }
    }
    bool fg=false;
    for(int i=loc;i<n;i++){
        if(ara[i]-tar==0){
            fg=true;
            break;
        }
        if(mp.find(ara[i]-tar)!=mp.end()){
            fg=true;
            break;
        }
    }
    if(fg){
        printf("Subarray exist\n");
    }
    else{
        printf("Subarry doesn't exist\n");
    }
}
