#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s[n+2];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    sort(s,s+n);
    int i=0,cnt =0;
    while(s[n-1][i]==s[0][i]){
        cnt++;
        i++;
    }
    cout << cnt << endl;

    return 0;
}

