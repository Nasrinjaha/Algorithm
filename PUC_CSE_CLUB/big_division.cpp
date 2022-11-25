#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s1;
    cin >> s ;
    int x,d,m=0;
    cin >> x;
    vector<int>v;
    long long len = s.size();
    bool fg = false;
    for(int i=0;i<len;i++){
      int d = s[i]-'0';
       m+=d;
       if(m/x!=0){

           v.push_back(m/x);
           fg = true;
       }
       else if(fg){
         v.push_back(m/x);
       }
       m%=x;
       m*=10;


    }
    if(m==0){
        cout << "yes\n";
        for(int i=0;i<v.size();i++){
            cout << v[i];
        }
        cout << endl;
    }

    else{
        cout << " NO\n";
    }

    return 0;
}
